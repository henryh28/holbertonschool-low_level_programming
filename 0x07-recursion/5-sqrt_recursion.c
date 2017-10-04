/**
 * find_sqrt - Locate square root of @target
 *
 * @test:      The number to be tested to see if it is a square root of @target
 * @target:    The number for which we are trying to find the square root
 *
 * Return:     Square root of @target if successful
 *             -1 if @test is not a square root of @target
 */

int find_sqrt(int test, int target)
{
	if (test * test == target)
	{
		return (test);
	}
	else
	{
		if (test * test >= 0)
		{
			return (find_sqrt(test + 1, target));
		}
		else
		{
			return (-1);
		}
	}
}



/**
 * _sqrt_recursion   - Find and return the natural square root of a number
 *
 * @n:                 The number to find the square root for
 *
 * Return:             The natural square root of @n
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(0, n));
}
