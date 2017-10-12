#include <stdlib.h>

/**
 * string_nconcat   - Copies @n bytes of @s2 into @s1
 *
 * @n:                Number of bytes to copy from @s2 to @s1
 * @s1:               The destination string, will contain n bytes of @s2
 * @s2:               String to be copied into @s1
 *
 * Return:            Pointer to copy of concactenated @s1 and @s2
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1_length, s2_length;
	char *ptr_string;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s1[s2_length] != '\0'; s2_length++)
		;

	if (n >= s2_length)
	{
		n = s2_length;
	}

	ptr_string = malloc(s1_length + n + 1);

	if (ptr_string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_length + n; i++)
	{
		ptr_string[i] = i < s1_length ? s1[i] : s2[i - s1_length];
	}

	ptr_string[i] = '\0';
	return (ptr_string);
}
