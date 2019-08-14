#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - create file with write and read permisions.
 * @filename: filename
 * @text_content: text  content
 * Return: if succes 1 else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int count2 = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);
	if (file == -1)
		return (-1);
	while (text_content[count2])
	{
		count2++;
	}
	if (text_content == NULL)
	{
		write(file, "", count2);
		close(file);
		return (1);

	}
	write(file, text_content, count2);
	close(file);
	return (1);
}
