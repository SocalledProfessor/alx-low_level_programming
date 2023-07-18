#include "main.h"
/**
* print_sign - This fuction determins if the
* input number is greater, equal or less than zero.
* @n: This is the interger input number
* Return: This will return 1 if it's greater tha 0,
* 0 if it's zero and -1 if it's less than zero.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

