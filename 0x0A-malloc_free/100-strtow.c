#include <stdio.h>
#include <stdlib.h>


char **strtow(char *str)
{
	char **array;
	int i, j = 0, length = 0, code = 0, number_of_words = 0;
	char words[100]= {'\0'};

	if (str == NULL || str =="")
	{
		return (NULL);
	}


	for (i = 0; str[i] != '\0'; i++){
		/* code: 0 = base, 1 = start of word, 2 = in word, -1 = end of word */

		if (code == 0 && str[i] != ' ')
		{
			code = 1;
		}
		if (code == 2 && str[i] == ' ')
		{
			code = -1;
		}

		if (code == 1)
		{
			code = 2;
		}

		if (code == 2){
			words[length] = str[i];
			length++;

		}


		if (code == -1){
			words[length] = '\n';
			length++;
			code = 0;
			number_of_words++;
		}


	}

	array = malloc(sizeof(char) * length + 1);

	if (array == NULL) {
		return (NULL);
	}

	for (i = 0; i < number_of_words; i++){
		array[i] = malloc(sizeof(char) * 15);


	}



	for (i = 0; i < number_of_words; i++)
	{
		for (j; j < length; j++)
		{
			if (words[j] != '\n'){
				array[i][j] = words[j];

			}
			else{
				array[i][j] = '\n';
			}

		}
	}
	array[i] = NULL;

	return (array);
}
