#include "main.h"
/**
 * _islower - detect lowercase anf uppercase
 *
 * Description: use _putchar to print
 *@c: collects alphabets
 * Return: (1) if c is lower otherwise (0)
 *
 */
int_islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
		lower = 1;
		}
	}
	return (lower);
}
