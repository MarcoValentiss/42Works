#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (!del || lst)
    {
        return;
    }
    t_list *temp;
    {
        while(*lst)
        {
            temp = (*lst)->next;
            ft_lstdelone(*lst, del);
            *lst = temp;
        }
    }
}