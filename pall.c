#include "monty.h"

/**
 * f_pall - Prints the elements of the stack.
 * @head: Pointer to the stack's head
 * @counter: Unused variable
 * Return: No return value
*/
void f_pall(stack_t **head, unsigned int counter)
{
    stack_t *current;
    (void)counter;

    current = *head;

    // Check if the stack is empty
    if (current == NULL)
        return;

    // Print the elements of the stack
    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
