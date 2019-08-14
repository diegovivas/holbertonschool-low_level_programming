#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main(int ac, char **av)
{
	int file1, file2, len;
	int buf[1024];
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(av[1], O_RDONLY, 0600);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}
	len = read(file1, buf, 1024);
	close(file1);
	file2 = open(av[2], O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0600);
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}
	write(file2, buf, len);
	close (file2);
        return (1);
}
