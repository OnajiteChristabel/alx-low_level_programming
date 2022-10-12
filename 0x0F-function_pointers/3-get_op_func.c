#include "3-calc.h"

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
        {"+", op_add(a,b)},
        {"-", op_sub(a, b)},
        {"*", op_mul(a, b)},
        {"/", op_div(a, b)},
        {"%", op_mod(a, b)},
        {NULL, NULL}
    };
    int i;

	i = 0;
	while (ops[i])
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
