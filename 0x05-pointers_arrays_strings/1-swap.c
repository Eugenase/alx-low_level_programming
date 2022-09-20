#include "main.h"
/**
 * n - check the code
 * swap_int - swaps two integers' values
 * @a: first integer
 * @b: second integer
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
		int tmp = *a;
		//storing the value of a inside b
			*a = *b;
			//swap of value of a into variable b
				*b = tmp;
}
