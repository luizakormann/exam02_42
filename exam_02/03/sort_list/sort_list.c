
#include "list.h"
#include <stdlib.h>
#include <stdio.h>

void	add_node(t_list **lst, int num)
{
	t_list	*new_node;
	t_list	*temp;

	new_node = malloc(sizeof(t_list));
	temp = NULL;
	if (!new_node)
		return ;
	new_node->data = num;
	new_node->next = NULL;
	if (*lst == NULL)
	{
		*lst = new_node;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
}

void	print_list(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		printf("%d, ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int cmp(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *i;
	t_list *j;
	int		temp;

	i = lst;
	j = i->next;
	temp = i->data;
	while (i)
	{
		while (j)
		{
			if (!cmp(i->data, j->data))
			{
				temp = i->data;
				i->data  = j->data;
				j->data = temp;
			}
			j = j->next;
		}
		j = i->next;
		i = i->next;
	}
	return (lst);
}

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	add_node(&lst, 10);
	add_node(&lst, 1);
	add_node(&lst, 13);
	print_list(lst);
	sort_list(lst, cmp);
	print_list(lst);
	return (0);
}
