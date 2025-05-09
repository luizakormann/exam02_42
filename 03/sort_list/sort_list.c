/*
#include <stdlib.h>
#include <stdio.h> */

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

/* void	add_node(t_list **lst, int num)
{
	t_list *new_node;
	t_list *temp;

	new_node = malloc(sizeof(t_list));
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

void print_list(t_list *head)
{
    while (head)
    {
        printf("Data: %d | Next: %p\n", head->data, (void *)head->next);
        head = head->next;
    }
} */

int	cmp(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*i;
	t_list	*j;
	int		temp;

	i = lst;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (!cmp(i->data, j->data))
			{
				temp = i->data;
				i->data = j->data;
				j->data = temp;
			}
			j = j->next;
		}
	i = i->next;
	}
	return (lst);
}

/* int	main(void)
{
	t_list *lst = NULL;
	add_node(&lst, 108);
	add_node(&lst, 73);
	add_node(&lst, 45);
	printf("b4 order\n");
	print_list(lst);
	sort_list(lst, cmp);
	printf("after order\n");
	print_list(lst);
	return (0);
} */
