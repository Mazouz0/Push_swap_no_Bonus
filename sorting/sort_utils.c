/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 05:53:52 by mohmazou          #+#    #+#             */
/*   Updated: 2024/05/26 12:06:48 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_max(t_stack *b, int index, int loop)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = b;
	while (tmp && i < loop)
	{
		if (tmp->index == index)
			return (1);
		tmp = tmp->next;
		i ++;
	}
	return (0);
}

void	full_stack_b(t_stack **a, t_stack **b, int d)
{
	int	i;

	i = 0;
	while (ft_lstsize(*a) > 0)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i ++;
		}
		else if ((*a)->index <= (i + d))
		{
			pb(a, b);
			i ++;
		}
		else
			ra(a);
	}
}

void	full_stack_a(t_stack **a, t_stack **b)
{
	int	i_max;

	i_max = get_higher_index(*b);
	while (ft_lstsize(*b))
	{
		if (*b && (*b)->index == i_max)
		{
			pa(b, a);
			i_max --;
		}
		else if ((*b)->next->index == i_max)
		{
			sb(b);
			pa(b, a);
			i_max --;
		}
		else
		{
			if (!(check_max(*b, i_max, ft_lstsize(*b) / 2)))
				rrb(b);
			else
				rb(b);
		}
	}
}
