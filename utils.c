/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:08:13 by mohmazou          #+#    #+#             */
/*   Updated: 2024/05/26 10:50:43 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_myfree_(char **result)
{
	int	i;

	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);
}

char	**ft_get_array(int argc, char **argv)
{
	int		i;
	char	**array;
	char	*arguments;

	i = 1;
	arguments = NULL;
	while (i < argc)
	{
		arguments = ft_strjoin(arguments, argv[i ++]);
		if (!arguments)
		{
			return (ft_error(), NULL);
		}
		arguments = ft_strjoin(arguments, " ");
		if (!arguments)
			return (NULL);
	}
	array = ft_split(arguments, ' ');
	free(arguments);
	return (array);
}

void	ft_full_stack(int argc, char **argv, t_stack **stack)
{
	char	**array;
	int		i;
	t_stack	*new;

	i = 0;
	array = NULL;
	array = ft_get_array(argc, argv);
	while (array[i])
	{
		new = ft_lsnew(ft_atoi(array[i]));
		ft_lstadd_back(stack, new);
		i ++;
	}
	ft_myfree_(array);
}

void	ft_indexing(t_stack **s)
{
	int		index;
	int		max_value;
	t_stack	*tmp;
	t_stack	*max_node;

	index = ft_lstsize(*s) - 1;
	while (index)
	{
		tmp = *s;
		max_value = INT_MIN;
		while (tmp)
		{
			if (tmp->value > max_value && tmp->index == 0)
			{
				max_value = tmp->value;
				max_node = tmp;
			}
			tmp = tmp->next;
		}
		max_node->index = index;
		index --;
	}
}
