/**
 * _strlen_recursion   - Return the length of string @s
 *
 * @s:                   Find and return the length of this string
 *
 * Return:               Integer value of length of string @s
 */


int _strlen_recursion(char *s)
{
	return (*s != '\0' ? 1 + _strlen_recursion(s + 1) : 0);
}
