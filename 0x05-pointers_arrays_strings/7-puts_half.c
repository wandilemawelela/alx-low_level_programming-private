#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: String
 *
 * Return: Nothing.
 *
 */

void puts_half(char *str)
{
        int len = 0;
        int idx = 0;
        int i;
        char *p = str;

        while (*p != '\0')
        {
                len = len + 1;
                p++;
        }

        if (len % 2 == 0)
        {
                idx = len / 2;
        } else
                idx = (len - 1) / 2;

        for (i = idx; i < len; i++)
        {
                putchar(str[i]);
        }
        putchar('\n');
}

