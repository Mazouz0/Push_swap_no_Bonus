/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_t_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:41:35 by mohmazou          #+#    #+#             */
/*   Updated: 2024/05/26 11:25:42 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lsnew(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (ft_error(), NULL);
	new->value = content;
	new->index = 0;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*p;

	p = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		p = ft_lstlast(*lst);
		p->next = new;
	}
}

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*p;
	int		size;
	int		i;

	i = 0;
	p = lst;
	size = ft_lstsize(lst);
	while (i < size - 1)
	{
		p = p->next;
		i ++;
	}
	return (p);
}

int	ft_lstsize(t_stack *lst)
{
	int		i;
	t_stack	*p;

	p = lst;
	i = 0;
	while (p != NULL)
	{
		i ++;
		p = p->next;
	}
	return (i);
}

void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}
