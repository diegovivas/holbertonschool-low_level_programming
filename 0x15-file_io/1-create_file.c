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
	int file, see;
	int count2 = 0;

	if (!filename || !text_content)
		return (-1);
	see = open(filename, O_RDONLY);
	if (see == -1)
	{
		file = open(filename, O_CREAT | O_RDWR, 00600);
		if (file == -1)
			return (-1);
		while (text_content[count2])
		{
			count2++;
		}

		write(file, text_content, count2);
		close(file);
		return (1);
	}
	else
	{
		return (-1);
	}
}
