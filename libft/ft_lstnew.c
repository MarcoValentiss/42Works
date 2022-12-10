#include "libft.h"

t_list *ft_lstnew(void *content)
{
    // Allocate memory for the new linked list.
    t_list *list = malloc(sizeof(t_list));

    // Check if the memory allocation was successful.
    if (list == NULL)
    {
        exit(1);
    }

    // Set the content of the new linked list to the given content.
    list->content = content;

    // Set the next pointer of the new linked list to NULL.
    list->next = NULL;

    // Return the new linked list.
    return list;
}