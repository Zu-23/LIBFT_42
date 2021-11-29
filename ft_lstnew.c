#include<stdlib.h>
#include<stdio.h>
typedef struct s_list
{
    void    *content;
    struct s_list   *next;
}t_list;



t_list  *ft_lstnew(void *content)
{
    t_list *elem;

    elem = (t_list *) malloc(sizeof(t_list));
    if (!elem || !content)
        return (0);
    elem -> next = NULL;
    elem -> content = content;
    return (elem);
}

int main()
{
    char str[10] = "hilo";
    t_list *s = ft_lstnew(&str);
    printf("%s",s ->content);
}