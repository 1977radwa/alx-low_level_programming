#include "main.h"

/**
 * _indigit - Check if a character is digit
 * @x: the number to be checked
 * Return: 1 for a character that will be a digit or 0 for any else
 */

int _indigit(int x)
{
        if (x >= 48 && x <= 57)
        {
        return (1);
        }
        return (0);
}
