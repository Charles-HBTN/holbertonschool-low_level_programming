#include <stdio.h>
#include "main.h"

/**
 * main - Print _putchar
 * Return: Always 0
 */
int main(void)                                                                                                                          
{                                                                                                                                       
    int ch;                                                                                                                         
    for (ch = 'a'; ch <= 'z'; ch++)                                                                                                 
    {                                                                                                                               
        putchar (ch);                                                                                                                                                                                                                   
    }    
    putchar ('\n');     
    return (0);
}
