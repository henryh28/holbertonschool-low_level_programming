/**
 * _memset   - Copies char @b, @n number of times into string @s
 *
 * @s:         String to be set
 * @b:         char used to write over @s
 * @n:         number of times to write @b into @s
 *
 * Return:     Pointer to string @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
