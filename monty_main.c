#define _POSIX_C_SOURCE 200809L
#include "monty.h"
#include <stdio.h>
#include <string.h>



/**
 * main - code to test the monty program
 * @argv: array of arguments passed to the program
 * @argc: size of arguments(counter)
 * Return: nothin
 */
int main(int argc, char **argv)
{
	int status = 0;
	char *string = NULL;
	stack_t *my_stack = NULL;
	size_t bufferlen = 0;
	FILE *user_file;
	unsigned int line_no = 1;
	char *bufferr = NULL;

	globalData.mode = 1; /*stack*/
	if (argc != 2)
		print_error_usage();

	user_file = fopen(argv[1], "r");

	if (!user_file)
		print_file_error(argv[1]);

	while ((getline(&bufferr, &bufferlen, user_file)) != (-1))
	{
		if (status)
			break;
		if (*bufferr == '\n')
		{
			line_no++;
			continue;
		}
		string = strtok(NULL, " \t\n");
		opcode_(&my_stack, string, line_no);
		line_no++;
	}
	free(bufferr);
	stackfreeing(my_stack);
	fclose(user_file);
	exit(EXIT_SUCCESS);
}

