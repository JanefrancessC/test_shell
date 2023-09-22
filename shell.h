#ifndef SHELL_H
#define SHELL_H

/*external files */

extern char **environ;

/* Header files */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stddef.h>


/* Constants */

#define PROMPT "$ "

/* function prototypes */
char *_strcpy(char *dest, const char *src);
int execute_command(char **argv);
char *pathfinder(char *cmd);
size_t _strlen(const char *str);
int _strncmp(const char *str1, const char *str2, size_t n);
char *_getenv(const char *name);
char *_strdup(const char *str);
char *_strcat(const char *dest, const char *src);
char *_strchr(const char *str, int c);
void execute_env(void);
void execute_exit(char *input, char *input_copy, char **argv);

#endif /* SHELL_H */


