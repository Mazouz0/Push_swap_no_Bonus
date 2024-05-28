/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:33:36 by mohmazou          #+#    #+#             */
/*   Updated: 2024/05/26 10:53:15 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	check(argc, argv);
	if (check_sort(argc, argv))
		return (0);
	ft_full_stack(argc, argv, &a);
	ft_indexing(&a);
	ft_sort(&a, &b);
	ft_free_stack(a);
}
