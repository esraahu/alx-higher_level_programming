#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 *
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
        listint_t *node = *head, *now;

        now = malloc(sizeof(listint_t));
        if (now == NULL)
                return (NULL);
        now->n = number;

        if (node == NULL || node->n >= number)
        {
                now->next = node;
                *head = now;
                return (now);
        }

        while (node && node->next && node->next->n < number)
                node = node->next;

        now->next = node->next;
        node->next = now;

        return (now);
}
