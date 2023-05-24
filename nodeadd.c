#include "monty.h"
/**
 * nodeadd - adds a node on a stack
 * @my_stack: double pointer to the stack to add the node onto
 * @w: the value/data to push on the stack
 * Return: the new node(success), NULL if it fails
 */
stack_t *nodeadd(stack_t **my_stack, const in w)
{
	stack_t *newnode;

	newnode = malloc(sizeof(stack_t));

	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(newnode);
		return (NULL);
	}
	newnode->w = w;
	newnode->next = *stack;
	new->prev = NULL;

	if (*stack != NULL)
		(*stack)->prev = newnode;
	*stack = newnode;

	return (newnode);
}
