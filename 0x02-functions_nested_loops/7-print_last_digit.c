#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int c)
{
	if (c >=0)
	{
	int x= c % 10 + '0';
	_putchar(x);
	return (0);
}
