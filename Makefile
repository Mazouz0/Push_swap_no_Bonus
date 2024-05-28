# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohmazou <mohmazou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 01:57:31 by mohmazou          #+#    #+#              #
#    Updated: 2024/05/25 06:03:14 by mohmazou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft_42/utils_libft_1.c libft_42/utils_libft_2.c libft_42/utils_libft_3.c libft_42/utils_t_lst.c

MOVES = moves/ft_pushing.c moves/ft_swaping.c moves/ft_rotating.c moves/ft_r_rotate.c 

SORTING = sorting/sort_utils.c sorting/sort.c

C_FIlES = push_swap.c utils.c ft_errors.c checking.c $(LIBFT) $(MOVES) $(SORTING)

OBJS = $(C_FIlES:.c=.o)

NAME = push_swap

$(NAME) : $(OBJS)
	cc -Wall -Wextra -Werror $(OBJS) -o push_swap

%.o : %.c push_swap.h
	cc -Wall -Wextra -Werror -c $< -o $@

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean