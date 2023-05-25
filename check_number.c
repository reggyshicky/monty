#include "monty.h"
/**
 * check_number - checks if a given str is number
 * @str_: string to check
 * Return: nothing
 */
int check_number(char *str_)
{
	int w;

	if (str_ == NULL)
		return (0);
	for (w = 0; str_[w]; w++)
	{
		if (w < '0' || w > '9')
			return (0);
	}
	return (1);
}
