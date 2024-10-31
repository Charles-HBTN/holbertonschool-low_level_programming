#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Check if the character is between '0' and '9'
 * tested character
 *Return: returns 1 if it is uppercase , 0 if not
 */
int _isdigit(int c)
{		
	if (c >= 48 && c <= 57)
	return (1);
	
	return (0);	
}
