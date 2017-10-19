#include "3-calc.h"
#include <stdlib.h>


#include <stdio.h>

/**
 * get_op_func     - Calls the appropriate function based on @s
 *
 * @s:               Symbol used to determine which math function to call
 *
 * Return:           Pointer to function corresponding to @s
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
