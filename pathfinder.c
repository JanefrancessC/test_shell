#include "shell.h"

/**
*pathfinder - function to find command path
*@cmd: command to be located
*return: pointer to full path or NULL
**/

char *pathfinder(char *cmd)
{
	char *path, *path_copy, *path_tok, *file_path;
	int cmd_len, dir_len;
	struct stat buffer;

	path = _getenv("PATH");

	if (path)
	{
		path_copy = _strdup(path);
		cmd_len = _strlen(cmd);
		path_tok = strtok(path_copy, ":");
		while (path_tok != NULL)
		{
			dir_len = _strlen(path_tok);
			file_path = malloc(cmd_len + dir_len + 2);
			_strcpy(file_path, path_tok);
			_strcat(file_path, "/");
			_strcat(file_path, cmd);
			_strcat(file_path, "\0");
			if (stat(file_path, &buffer) == 0)
			{
				free(path_copy);
				return (file_path);
			}
			else
			{
				free(file_path);
				path_tok = strtok(NULL, ":");
			}
		}
		free(path_copy);
		if (stat(cmd, &buffer) == 0)
			return (cmd);
		return (NULL);

	}
	return (NULL);
}

