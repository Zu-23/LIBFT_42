#include<stdio.h>
#include<stdlib.h>

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    void *ptr = lst -> content;
    if (!lst)
        return ;
    del(ptr);
    free(lst);
    lst = NULL;
}