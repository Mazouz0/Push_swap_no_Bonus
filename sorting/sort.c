/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 05:53:55 by mohmazou          #+#    #+#             */
/*   Updated: 2024/05/26 11:04:38 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_higher_index(t_stack *stack)
{
	int	higher;

	higher = stack->index;
	while (stack)
	{
		if (stack->index > higher)
			higher = stack->index;
		stack = stack->next;
	}
	return (higher);
}

void	ft_sort_3(t_stack **a)
{
	int	higher;

	higher = get_higher_index(*a);
	if ((*a)->index == higher)
		ra(a);
	else if ((*a)->next->index == higher)
		rra(a);
	if ((*a)->index > (*a)->next->index)
		sa(a);
}

void	ft_sort_4(t_stack **a, t_stack **b)
{
	int	p;
	int	size;
	int	i;

	size = ft_lstsize(*a);
	p = 0;
	i = 0;
	while (!p && i < size)
	{
		if ((*a)->index == 0)
		{
			pb(a, b);
			p ++;
		}
		else
			ra(a);
		i ++;
	}
	ft_sort_3(a);
	pa(b, a);
}

void	ft_sort_5(t_stack **a, t_stack **b)
{
	int	p;
	int	size;
	int	i;

	p = 0;
	size = ft_lstsize(*a);
	i = 0;
	while (p <= 1 && i < size)
	{
		if ((*a)->index <= 1)
		{
			pb(a, b);
			p ++;
		}
		else
			ra(a);
		i ++;
	}
	ft_sort_3(a);
	if ((*b)->index < (*b)->next->index)
		sb(b);
	pa(b, a);
	pa(b, a);
}

void	ft_sort(t_stack **a, t_stack **b)
{
	if (ft_lstsize(*a) == 2)
	{
		if ((*a)->index > (*a)->next->index)
			sa(a);
	}
	else if (ft_lstsize(*a) == 3)
		ft_sort_3(a);
	else if (ft_lstsize(*a) == 4)
		ft_sort_4(a, b);
	else if (ft_lstsize(*a) == 5)
		ft_sort_5(a, b);
	else
	{
		if (ft_lstsize(*a) <= 100)
			full_stack_b(a, b, 15);
		else
			full_stack_b(a, b, 30);
		full_stack_a(a, b);
	}
}
