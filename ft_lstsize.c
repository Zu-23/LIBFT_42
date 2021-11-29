
typedef struct s_list
{
    void    *content;
    struct s_list   *next;
}t_list;

int ft_lstsize(t_list *lst)
{
    t_list *ptr;
    int count;

    if (!lst)
        return (0);
    ptr = lst;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr -> next;
    }
    return (count);
}