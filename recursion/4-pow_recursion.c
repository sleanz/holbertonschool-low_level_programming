#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y.
 *         Returns -1 if y is negative.
 */
#include "main.h"

int _pow_recursion(int x, int y)
{
		if (y < 0)
			return (-1);
		else if (y == 0)
			return (1);
		return (_pow_recursion(x, y - 1) * x);
}
