#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	
	while(*s != c)
	{
		s++;
		if(*s == c)
		{
			return (s);
		}
		if(!*s) 
		{
			return NULL;
		}
	 }
	return(0);
}
