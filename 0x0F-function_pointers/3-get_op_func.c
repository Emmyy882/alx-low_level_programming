#include "calc.h"

/**
 * get_op_func - selects the correct function to perform the operation asked by the user
 * @s: takes the operator
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
    int i;

    if (s != '+' && s != '-' && s != '*' && s != '/' && s != '%')
    {
	    return (NULL);
    }
}
