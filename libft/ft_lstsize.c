#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    if (lst !=  NULL)
    {
        while (lst->next != NULL)
        {
            lst = lst->next;
            i++;
        }
        return (i + 1);
    }
    else
        return (0);
}