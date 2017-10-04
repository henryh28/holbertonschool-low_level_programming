#include "2-strlen_recursion.c"

/**
 * test              - check if @s[@left] is equal to @s[@right]
 *
 * @s:               String to be checked
 * @left:            index for left char to be evaulated
 * @right:           index for right char to be evaluated
 *
 * Return:           (1) If No more to compare and all
 *                   (0) If @s is not a palindrome
*/


int test(int left, int right, char *s)
{
	if (right > left)
	{
		return (s[left] != s[right] ? 0 : test(left + 1, right - 1, s));
	}

	return (1);
}


/**
 * is_palindrome   - Determine if @s is a palindrome
 *
 * @s:               Compute if this argument is a palindrome
 *
 * Return:           (1) If @s is a palindrome
 *                   (0) If @s is not a palindrome
*/


int is_palindrome(char *s)
{
	int left = 0;
	int right = _strlen_recursion(s) - 1;

	return (test(left, right, s));
}
