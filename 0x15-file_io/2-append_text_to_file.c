#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - append text to file .
 * @filename:filename.
 * @text_content:content of text.
 * Return: 1 on success and -1 if fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int count = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		return (1);
	}
	while (text_content[count])
	{
		count++;
	}
	write(file, text_content, count);
	close(file);
	return (1);
}
