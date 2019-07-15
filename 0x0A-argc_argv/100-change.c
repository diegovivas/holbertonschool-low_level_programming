#include <stdio.h>
#include <stdlib.h>
/**
 * _isupper - check the code for Holberton School students.
 *@c: is c do something
 * Return: Always 0.
 */
int main (int argc, char *argv[])
{
	float division;
	int entero,resultado,numero,numero2,ciclo;
	char monedas[5]={25,10,5,2,1};

	numero = atoi(argv[1]);
	resultado = 0;
	if (argc == 2)
	{
		ciclo = 0;
		while(monedas[ciclo] != '\0')
		{
			numero2 = monedas[ciclo];
			if (numero2 <= numero)
			{
				division = numero/numero2;
				entero = division;
				numero = numero - (numero2 * entero);
				resultado = resultado + entero;
			}
			ciclo++;
		}
		printf("%d\n", resultado);
		return(0);
	}
	else
	{
		printf("Error\n");
			return(1);
	}

}
