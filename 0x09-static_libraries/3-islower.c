#include "main.h"
/**
 * _islower - checks if character is lower or not
 * @c: the character should be checked
 * Return: 1 in lower & 0 otherwise
 */
int _islower(int c)
{
        if (c >= 97 && c <= 122)
                return (1);
        else
                return (0);
}
