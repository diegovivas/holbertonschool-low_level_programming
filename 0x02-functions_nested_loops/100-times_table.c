#include "holberton.h"
/**
 * print_times_table - Entry point
 *@i: do something
 * Return: Always 0 (Success)
 */
void print_times_table(int i)
{
  if(i < 16 && i > -1)
    {
      int a, b, c, d, e, f;

      for (a = 0; a <= i; a++)
	{
	  _putchar('0');

	  for (b = 1; b <= i; b++)
	    {

	      c = a * b;
	      d = c / 100, e = c / 10 % 10, f = c % 10;
	      _putchar(',');
	      _putchar(' ');

	      if (c > 99)
		{
		  _putchar(d + '0');
		  _putchar(e + '0');
		  _putchar(f + '0');
		}
	      else if (c < 10)
		{
		  _putchar(' ');
		  _putchar(' ');
		  _putchar(f + '0');

		}
	      else
		{
		  _putchar(' ');
		  _putchar(e + '0');
		  _putchar(f + '0');
		}

	    }

	  _putchar('\n');
	}
    }
}
