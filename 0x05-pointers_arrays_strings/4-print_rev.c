#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: string to be reserved.
 */
void print_rev(char *s)
{
        int c = 0;

        while (s[c] != '\0')
        {
        c++;
        }
                len++;

        for (c -= 1; c >= 0; c--)
        {
                _putchar(s[c]);
        }

        _putchar('\n');
}
