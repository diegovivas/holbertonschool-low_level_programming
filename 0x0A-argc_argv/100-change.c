#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *@argc: arguments passed
 *@argv: array into arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	double division;
	unsigned int entero, resultado, numero, ciclo;
	unsigned char monedas[5] = {25, 10, 5, 2, 1};

	numero = atoi(argv[1]);
	resultado = 0;
	if (argc == 2)
	{
		ciclo = 0;
		while (monedas[ciclo] != '\0')
		{
			if (numero >= monedas[ciclo])
			{
				division = numero / monedas[ciclo];
				entero = division;
				numero = numero - (monedas[ciclo] * entero);
				resultado = resultado + entero;
			}
			ciclo++;
		}
		printf("%u\n", resultado);
		return (0);
	}
	else
	{
		printf("Error\n");
			return (1);
	}

}
