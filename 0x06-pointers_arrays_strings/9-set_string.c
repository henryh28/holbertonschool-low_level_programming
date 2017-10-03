/**
 * set_string   - Set the value of a pointer to a char
 *
 * @s:            The string to be overwritten
 * @to:           The string used to overwrite the content of @s
 *
 * Return:        None
 */


void set_string(char **s, char *to)
{
	*s = to;
}
