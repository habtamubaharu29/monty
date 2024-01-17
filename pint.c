#include "monty.h"

/**
 * f_pint - Prints the value of the top element of the stack.
 * @head: Pointer to the stack's head
 * @counter: Line number
 * Return: No return value
*/
void f_pint(stack_t **head, unsigned int counter)
{
    // Check if the stack is empty
    if (*head == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    // Print the value of the top element
    printf("%d\n", (*head)->n);
}
