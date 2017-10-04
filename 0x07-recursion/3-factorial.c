/**
 * factorial   - Return the factorial of argument @n
 *
 * @n:           The number used to initiate the factorial calcuations
 *
 * Return:       Factorial of @n
 */


int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
