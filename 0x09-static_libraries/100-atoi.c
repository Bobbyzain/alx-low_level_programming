#include "main.h"

/**
 * _atoi - My alphabet to integer function
 * Description: An example function
 * @s: Pointer to the string I want to parse through
 * Return: Pointer to the 1st occurence of c in s else NULL
 */

int _atoi(char *s)
{
        int i;

        i = 0;
        while (s[i] != '\0')
        {
                _putchar(s[i]);
                i++;
        }
        _putchar('\n');
}
