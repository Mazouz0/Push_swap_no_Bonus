/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 03:25:27 by mohmazou          #+#    #+#             */
/*   Updated: 2024/05/26 11:12:25 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_stack **s_from, t_stack **s_to)
{
	t_stack	*tmp;

	if (!s_from || !s_to)
		return ;
	tmp = (*s_from);
	*s_from = (*s_from)->next;
	tmp->next = NULL;
	ft_lstadd_front(s_to, tmp);
}

void	pa(t_stack **b, t_stack **a)
{
	if (!(*b))
		return ;
	ft_push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	if (!(*a))
		return ;
	ft_push(a, b);
	write(1, "pb\n", 3);
}
