/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:02:03 by mohmazou          #+#    #+#             */
/*   Updated: 2024/05/26 12:43:17 by mohmazou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>

# include "libft_42/libft.h"

void	ft_error(void);
void	ft_free_stack(t_stack *a);
void	check(int argc, char **argv);
char	**ft_get_array(int argc, char **argv);
void	ft_myfree_(char **result);
int		check_sort(int argc, char **argv);
void	ft_full_stack(int argc, char **argv, t_stack **stack);
void	ft_indexing(t_stack **s);
void	ft_swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	ft_push(t_stack **s_from, t_stack **s_to);
void	pa(t_stack **b, t_stack **a);
void	pb(t_stack **a, t_stack **b);
void	ft_rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	ft_r_rotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
int		get_higher_index(t_stack *stack);
void	ft_sort(t_stack **a, t_stack **b);
void	ft_sort_3(t_stack **a);
void	ft_sort_4(t_stack **a, t_stack **b);
void	ft_sort_5(t_stack **a, t_stack **b);
int		check_max(t_stack *b, int index, int loop);
void	full_stack_b(t_stack **a, t_stack **b, int d);
void	full_stack_a(t_stack **a, t_stack **b);

#endif
