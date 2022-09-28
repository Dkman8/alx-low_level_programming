#include "main.h"

/**
 * _strlen_recursion - function to get Length of String
 * @s: string param
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
