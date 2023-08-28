/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooahn <jooahn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 22:00:43 by jooahn            #+#    #+#             */
/*   Updated: 2023/08/28 19:42:32 by jooahn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

int		is_valid(int ac, char *inputs[]);

t_stack	*new_stack(void);
t_stack	*get_stack(char type);

void	swap(t_stack *stack);
void	push(t_stack *from, t_stack *to);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);

t_list	*pop_front(t_stack *stack);
t_list	*pop_back(t_stack *stack);

void	add_front(t_stack *stack, t_list *new);
void	add_back(t_stack *stack, t_list *new);
int		isEmpty(t_stack *stack);
void	print(int content);
void	print_stack(t_stack *stack);

#endif
