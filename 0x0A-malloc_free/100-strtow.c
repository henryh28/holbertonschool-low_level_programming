#include <stdio.h>
#include <stdlib.h>

/**
 * splitted_words     - Format @str into regular sentence format
 *
 * @str:                The string to be formatted
 *
 * Return:              Pointer to cleaned up sentence on the heap
 */


char *splitted_words(char *str)
{
	int i = 0, code = 0, length = 0;
	char *words;

	if (str == NULL || str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	words = malloc(sizeof(char) * (i + 1));

	/* code: 0 = base, 1 = start of word */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (code == 0 && str[i] != ' ')
		{
			code = 1;
		}
		if (code == 1)
		{
			words[length] = str[i];
			length++;
		}
		if (code == 1 && str[i] == ' ')
		{
			code = 0;
		}
	}

	return (words);
}

/**
 * strtow     - Split @str into separate words
 *
 * @str:        The string to be separated
 *
 * Return:      Pointer to pointer of char/strings
 */

char **strtow(char *str)
{
	char **array;
	int i = 0, j = 0, k = 0, length = 0;
	int number_of_words = 0, cwl = 0, lwl = 0;
	char *words;

	words = splitted_words(str);
	if (words == NULL)
		return (NULL);
	for (i = 0; words[i] != '\0'; i++)
	{
		length++;
		cwl++;
		lwl = cwl >= lwl ? cwl : lwl;
		if (words[i] == ' ')
		{
			number_of_words++;
			cwl = 0;
		}
	}
	array = malloc(sizeof(char) * length + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < number_of_words; i++)
		array[i] = malloc(sizeof(char) * lwl);
	for (i = 0; i <= number_of_words; i++)
	{
		for (k = 0; j < length; j++, k++)
		{
			if (words[j] != ' ')
				array[i][k] = words[j];
			else
			{
				array[i][k] = '\0';
				j++;
				break;
			}
		}
	}
	array[i] = NULL;
	return (array);
}
