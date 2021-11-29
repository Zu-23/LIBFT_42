#include<stdio.h>
#include<stdlib.h>
typedef struct s_list
{
    void    *content;
    struct s_list   *next;
}t_list;

t_list  *ft_lstlast(t_list *lst)
{
    t_list *ptr;

    ptr = lst;
    if (!lst)
        return (0);
    while (ptr != NULL)
    {
        ptr = ptr -> next;
    }
    return (ptr);
}