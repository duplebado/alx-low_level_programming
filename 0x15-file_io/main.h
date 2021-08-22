#ifndef MAIN_H_
#define MAIN_H_

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* #ifndef MAIN_H_ */
