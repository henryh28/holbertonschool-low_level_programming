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

	/* Count length of original string */
	for (i = 0; str[i] != '\0'; i++)
		;

	/* Dynamically assign memory based on length of original string */
	words = malloc(sizeof(char) * (i + 1));

	/* code: 0 = base, 1 = start of word */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Found a word */
		if (code == 0 && str[i] != ' ')
		{
			code = 1;
		}

		/* In word processing mode, add letters to word[] */
		if (code == 1)
		{
			words[length] = str[i];
			length++;
		}

		/* Found end of word, Reset to bases status */
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
	int i = 0, j = 0, length = 0, number_of_words = 0, cwl = 0, lwl = 0;
	char *words;


/*	if (str == NULL || str == "") */
/*		return (NULL); */

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
			words[i] = '\n';
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
		for (; j < length; j++)
			array[i][j] = words[j] != '\n' ? words[j] : '\n';
	}
	array[i] = NULL;

	return (array);
}
