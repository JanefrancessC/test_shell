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

#endif /* SHELL_H */


