#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the input string
 *
 * Return: the resulting character pointer
 */

char *cap_string(char *s)
{
	int i, prev;

	i = 0;
	while (*s != '\0')
	{
		prev = *s;
		s++;
		if (is_sep(prev) && is_lower(*s))
			*(s) = *(s) - 32;
		i++;
	}

	while (i-- > 0)
		s--;

	return (s);
}

/**
 * is_lower - check if a character is lowercase alphabet
 * @c: the input character
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int is_lower (char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * is_sep - check is a character is a separator ,, ;, ., !, ?, ", (, ), {, and }
 * @c: the input character
 *
 * Return: 1 if separator, 0 otherwise
 */

int is_sep (char c)
{
	switch (c)
	{
	case ',': case ';': case '.': case '!': case '?': case ' ': case '\t':
	case '"': case '(': case ')': case '{': case '}': case '\n':
		return (1);
		break;
	default:
		return (0);
		break;
	}
}
