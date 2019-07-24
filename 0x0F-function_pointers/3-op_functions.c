#include <stdlib.h>
#include "function_pointers.h"
/**
 * op_add - Struct op
 * @a: The operator
 * @b: The function associated
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Struct op
 * @a: The operator
 * @b: The function associated
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: mod
 */
int op_mod(int a, int b)
{
	return (a % b);
}
