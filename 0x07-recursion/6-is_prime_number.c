/**
 * prime_check       - Determine if @target is a prime number
 *
 * @target:            The argument to be used to check for prime number status
 * @test:              Check if this number divides evenly into @target
 *
 * Return:             (1) if @test does not divide evenly into @target
 *                     (0) if @test divides evently into @target
 */


int prime_check(int test, int target)
{
	/* insta fail check to save computation cycle */
	if (target <= 1 || target % 2 == 0)
	{
		return (0);
	}

	if (test > 2)
	{
		if (target % test == 0)
		{
			return (0);
		}
		else
		{
			return (prime_check(test - 1, target));
		}
	}
	else
	{
		return (1);
	}
}



/**
 * is_prime_number   - Determine if @n is a prime number
 *
 * @n:                 The argument to be used to check for prime number status
 *
 * Return:             (1) if @n is a prime number
 *                     (0) if @n is not a prime number
 */


int is_prime_number(int n)
{
	return (prime_check(n - 1, n));
}
