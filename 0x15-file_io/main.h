#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <fcntl.h>
#define BUFSIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);


#endif
