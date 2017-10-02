/**
 * _strstr     - Returns first occurence of string @needle in string @haystack
 *
 * @haystack:    String to be searched against
 * @needle:      String to be searched for
 *
 * Return:       Pointer @haystack at first occurence of @needle
 */


char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, matched = 0;

	while (*haystack != '\0')
	{
		matched = 1;
		for (i = 0; needle[i]; i++)
		{
			if (*(haystack + i) != *(needle + i))
			{
				matched = 0;
				break;
			}
		}

		if (matched == 1)
		{
			return (haystack);
		}

		haystack++;
	}
	return (0);
}
