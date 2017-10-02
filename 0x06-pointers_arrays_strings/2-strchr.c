/**
 * _strchr   - Scans string @s for first occurence of char @c
 *
 * @s:         String to be scanned
 * @c:         Character to scan for in string @s
 *
 * Return:     Pointer to first occurence of @c in string @s
 */


char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}

	return (s[i] == c ? (s + i) : '\0');
}
