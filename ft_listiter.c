#include<stdio.h>
#include<stdblib.h>

void    ft_listiter(t_list *lst, void (*f)(void *))
{
    t_list *ptr;

    if (!*lst)
        return ;
    ptr = *lst;
    while (ptr)
    {
        f(*lst -> content);
        ptr = (*lst) -> next;
    }
}