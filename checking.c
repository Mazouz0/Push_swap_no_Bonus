/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:02:02 by mohmazou          #+#    #+#             */
/*   Updated: 2024/05/26 10:44:01 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_duplication(char **str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_atoi(str[0]) < -2147483648 || ft_atoi(str[0]) > 2147483647)
		return (ft_error());
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if ((ft_atoi(str[i]) == ft_atoi(str[j]))
				|| (ft_atoi(str[j]) < -2147483648
					|| ft_atoi(str[j]) > 2147483647))
				return (ft_error());
			j ++;
		}
		i ++;
	}
}

void	check_empty(char **argv)
{
	int	i;
	int	j;
	int	space;

	i = 1;
	while (argv[i])
	{
		j = 0;
		space = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]))
				space = 1;
			j ++;
		}
		if (space == 0 || argv[i][0] == '\0')
			ft_error();
		i ++;
	}
}

void	check(int argc, char **argv)
{
	int		i;
	int		j;
	char	**array;

	array = NULL;
	i = 0;
	array = ft_get_array(argc, argv);
	check_empty(argv);
	check_duplication(array);
	while (array[i])
	{
		j = 0;
		if ((array[i][j] == '-' || array[i][j] == '+') && array[i][j + 1])
			j ++;
		while (array[i][j])
		{
			if (!ft_isdigit(array[i][j]))
				(ft_myfree_(array), ft_error());
			j ++;
		}
		i ++;
	}
	ft_myfree_(array);
}

int	check_sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	**array;

	array = ft_get_array(argc, argv);
	i = 0;
	while (array[i])
	{
		j = i + 1;
		while (array[j])
		{
			if (ft_atoi(array[i]) > ft_atoi(array[j]))
				return (ft_myfree_(array), 0);
			j ++;
		}
		i ++;
	}
	return (ft_myfree_(array), 1);
}
