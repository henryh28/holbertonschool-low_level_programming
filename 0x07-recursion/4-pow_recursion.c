/**
 * _pow_recursion   - Return the value @x raised to the power of @y
 *
 * @x:                The base
 * @y:                The exponent
 *
 * Return:            Exponentiation of @x raised to the power of @y
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	return (y > 0 ? x * _pow_recursion(x, y - 1) : 1);
}
