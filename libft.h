#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **alst, t_list *new);
int ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);

#endif