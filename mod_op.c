#include "monty.h"
/**
 * mod_op - gives the remainder of division
 * @my_stack: double pointer to the stack containing the two elements
 * @line_no: line no associated with the mod opcode
 * Return: void
 */
void mod_op(stack_t **my_stack, unsigned int line_no)
{
	int mod_result;

	if (my_stack == NULL || *my_stack == NULL || (*my_stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_no);
		exit(EXIT_FAILURE);
		return;
	}
	mod_result = ((*my_stack)->next->n) % ((*my_stack)->n);
	pop_op(my_stack, line_no);
	(*my_stack)->n = mod_result;
}
