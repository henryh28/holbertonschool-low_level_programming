/**
 * _memcpy    - Copies @n bytes from @src into @dest
 *
 * @dest:       String to be copied into and returned
 * @src:        String to be copied from
 * @n:          Number of bytes to copy from @src into @dest
 *
 * Return:      Pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
