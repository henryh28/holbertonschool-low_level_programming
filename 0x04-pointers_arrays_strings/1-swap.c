/**
 * swap_int   - Use pointers to swap the value of 2 function parameters
 *
 * @a:          Argument whose value should swap with @b
 * @b:          Argument whose value should swap with @a
 *
 * Return:      None
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
