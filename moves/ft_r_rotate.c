/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 05:16:21 by mohmazou          #+#    #+#             */
/*   Updated: 2024/05/26 11:15:00 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_r_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	tmp = *stack;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	ft_lstadd_front(stack, last);
}

void	rra(t_stack **a)
{
	write(1, "rra\n", 4);
	ft_r_rotate(a);
}

void	rrb(t_stack **b)
{
	write(1, "rrb\n", 4);
	ft_r_rotate(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	write(1, "rrb\n", 4);
	ft_r_rotate(a);
	ft_r_rotate(b);
}
