#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - read a text file and prints it.
 * @filename:name of file.
 * @letters: characters that musth be read.
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int count2 = 0;
	char buf[1024000];

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		printf("FAIL");
		exit(1);
	}
	count2 = read(file, buf, letters);
	buf[count2] = '\0';
	write(STDOUT_FILENO, buf, count2);
	close(file);

	return (count2);
}
