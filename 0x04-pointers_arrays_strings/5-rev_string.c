/**
 * rev_string - Function that reverses a string
 *
 * @s:         Pointer to the string that is to be reversed
 *
 * Return:      None
 */


void rev_string(char *s)
{
	int length = 0, i;
	char temp[99];

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
		temp[i] = s[i];
	}

	for (i = 0; i < length; i++)
	{
		s[i] = temp[length - i - 1];
	}
}
