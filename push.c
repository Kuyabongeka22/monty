#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void push(stack_t** head, int n)
{
	stack_t *temp;
	temp = *head;
	stack_t *new_node = (stack_t*)malloc(sizeof(stack_t));
	if (head = NULL)
	{
		new_node->next = NULL;
		temp = new_node;
	}
	else
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = temp;
		temp->prev = new_node;
		temp = new_node;
	}
}
