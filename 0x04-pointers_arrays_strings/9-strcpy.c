/**
 * _strcpy - Copy content of src string to buffer pointed at by *dest
 *
 * @dest:    Buffer to copy data of src string to
 * @src:     Source string to copy into @dest
 *
 * Return:   Pointer to @dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
