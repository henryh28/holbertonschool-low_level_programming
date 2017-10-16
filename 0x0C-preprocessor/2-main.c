#include "_putchar.c"

/**
 * main   - Outputs the name of the file that the program was compiled from
 *
 * Return:  (0) Success
 */


int main(void)
{
	int i = 0;

	for (i = 0; __FILE__[i] != '\0'; i++)
	{
		_putchar(__FILE__[i]);
	}

	_putchar('\n');

	return (0);
}
