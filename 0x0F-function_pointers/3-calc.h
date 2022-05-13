#ifndef __3_CALC__
#define __3_CALC__

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - Returns sum of two numbers
 * @a: One of the number to be operated on
 * @b: One of the number to be operated on
 * Return: - Sum of a and b
 */
int op_add(int a, int b);

/**
 * op_div - Returns result of the division of two numbers
 * @a: One of the number to be operated on
 * @b: One of the number to be operated on
 * Return: - Result of division of a and b
 */
int op_div(int a, int b);

/**
 * op_sub - Returns difference of two numbers
 * @a: One of the number to be operated on
 * @b: One of the number to be operated on
 * Return: - Difference of a and b
 */
int op_sub(int a, int b);

/**
 * op_mul - Returns sum of two numbers
 * @a: One of the number to be operated on
 * @b: One of the number to be operated on
 * Return: - Multiple of a and b
 */
int op_mul(int a, int b);

/**
 * op_mod - Returns remainder of division of two numbers
 * @a: One of the number to be operated on
 * @b: One of the number to be operated on
 * Return: - Remainder of division of a and b
 */
int op_mod(int a, int b);

/**
 * get_op_func - Select operation
 * @s: Operation symbol
 * Return: The function operation
 */
int (*get_op_func(char *s))(int a, int b);

#endif
