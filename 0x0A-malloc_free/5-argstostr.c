#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr     - Concatenates arguments into new string
 *
 * @ac:            argument count
 * @av:            vector of arguments
 *
 * Return:         Pointer to concatenated string
 */


char *argstostr(int ac, char **av)
{
	char *str;
	int length = 0, word = 0, letter = 0;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	/* Get number of letters for all words plus \n at end of each word */
	for (word = 0; word < ac; word++)
	{
		for (letter = 0; av[word][letter] != '\0'; letter++)
		{
			length++;
		}
		length++;
	}

	str = malloc(sizeof(char) * length + 1);
	length = 0;

	/* Fill str with letters for words with \n at end of each word */
	for (word = 0; word < ac; word++)
	{
		for (letter = 0; av[word][letter] != '\0'; letter++)
		{
			str[length] = av[word][letter];
			length++;
		}
			str[length] = '\n';
			length++;
	}

	str[length] = '\0';
	return (str);
}
