#include "main.h"
/**
 * _lenght - checks the lenght of a string
 * @s: the string
 * Return: returns the lenght of the string
 */
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}
/**
 * checkp - checks if the string is palindrome
 * @i: is the index
 * @lg: lenght of the string
 * @s: the string
 * Return: 1 if it is a palindrome or 0 if not
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: returns 1 if palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
