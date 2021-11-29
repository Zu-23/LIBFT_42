#include<stdio.h>
#include<stdlib.h>

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *ptr;

    ptr = *lst -> next;
    while (ptr)
    {
        ptr = *lst -> next;
        ft_lstdelone(*lst, del);
    }
}