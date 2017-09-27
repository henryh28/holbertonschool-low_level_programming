#include <stdio.h>

/**
 * _atoi - Return integer values from string parameter
 *
 * @s:     String to process for integer to return to calling function
 *
 * Return: Integer value from processed string @s
 */

int _atoi(char *s)
{
	int i = 0, result = 0, negative = 0, modified = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '+')
		{
			negative++;
		}

		if (s[i] == '-')
		{
			negative--;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += s[i] - '0';
			modified++;
		}
		else if (modified != 0)
		{
			break;
		}
	}

	return (negative < 0 ? (result *= -1) : (result));
}
