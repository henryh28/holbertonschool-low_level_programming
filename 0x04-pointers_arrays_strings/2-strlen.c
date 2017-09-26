/**
 * _strlen      - Return the length of a string argument
 *
 * @*s:         - Pointer to string variable whose length needs to be returned
 *
 * Return:      - Length of string variable that is pointed to by pointer
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
/*
 *	while (*s != '\0')
 *	{
 *		length ++;
 *		s++;
 *	}
*/
	return (length);
}
