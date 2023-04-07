#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to match string
 * Return: matches string or NULL
 */
char *_strpbrk(char *s, char *accept)
{
        unsigned int i, j;
        char *p;

        for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; accept[j] != '\0'; j++)
                {
                        if (accept[j] == s[i])
                        {
                                p = &s[i];
                                return (p);
                        }
                }
        }

        return (0);
}
