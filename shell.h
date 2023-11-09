#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

void print(const char *command);
void exeCommand (char *command);
void printUserMessage(char *shellProgram);
#endif
