/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaping.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 01:06:31 by mohmazou          #+#    #+#             */
/*   Updated: 2024/05/26 11:18:59 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_stack **stack)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	tmp1 = (*stack);
	tmp2 = (*stack)->next;
	*stack = (*stack)->next->next;
	tmp1->next = NULL;
	tmp2->next = NULL;
	ft_lstadd_front(stack, tmp1);
	ft_lstadd_front(stack, tmp2);
}

void	sa(t_stack **a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	write(1, "ss\n", 3);
	sa(a);
	sb(b);
}
