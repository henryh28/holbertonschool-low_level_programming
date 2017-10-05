/**
 * wildcmp   - Determine if 2 strings can be considered identical
 *
 * @s1:        Base string to be used for evaluation
 * @s2:        2nd string that can include '*' as a wildcard
 *
 * Return:     (1) If the strings are considered identical
 *             (0) If the strings are not considered identical
 */


int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}
		else
		{
			return (wildcmp(s1 + 1, s2));
		}
	}
	return (0);
}
