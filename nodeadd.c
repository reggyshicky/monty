#include "monty.h"
/**
 * nodeadd - adds a node on a stack
 * @my_stack: double pointer to the stack to add the node onto
 * @w: the value/data to push on the stack
 * Return: the new node(success), NULL if it fails
 */
stack_t *nodeadd(stack_t **my_stack, const in n)
{
	stack_t *newnode;

	newnode = malloc(sizeof(stack_t));

	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *my_stack;
	new->prev = NULL;

	if (*my_stack != NULL)
		(*my_stack)->prev = newnode;
	*my_stack = newnode;

	return (newnode);
}
