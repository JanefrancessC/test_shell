#ifndef SHELL_H
#define SHELL_H

/* Header files */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Constants */

#define PROMPT "$ "

/* function prototypes */
char *_strcpy(char *dest, const char *src);
void execute_command(char **argv);
char *pathfinder(char *cmd);
size_t _strlen(const char *str);
int _strncmp(const char *str1, const char *str2, size_t n);
char *_getenv(const char *name);

#endif /* SHELL_H */


