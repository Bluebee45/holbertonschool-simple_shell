#ifndef SHELL_H
#define SHELL_H


#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>

int simple_shell(void);
char **tokenizer(char *buffer, const char *delimiter);
int main(void);
char **split_line(char *line);

#endif
