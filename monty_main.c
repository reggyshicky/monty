#define _POSIX_C_SOURCE 200809L
#include "monty.h"
#include <stdio.h>
#include <string.h>

int condition = 0;

/**
 * main - code to test the monty program
 * @argv: array of arguments passed to the program
 * @argc: size of arguments(counter)
 * Return: nothin
 */
int main(int argv, char **argv)
{
	char *string = NULL;
	stack_t *my_stack = NULL;
	size_t bufferlen = 0;
	FILE *user_file;
	unsigned int line_no = 1;
	char *bufferr = NULL;

	globalData.mode = 1; /*stack*/
	if (argc != 2)

