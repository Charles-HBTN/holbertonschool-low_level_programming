#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int ch;                                                                                                                         
    for (ch = 'a'; ch <= 'z'; ch++)                                                                                                 
    {                                                                                                                               
        putchar (ch);                                                                                                                                                                                                                   
    }    
    putchar ('\n');     
    print_alphabet();
    return (0);
}
