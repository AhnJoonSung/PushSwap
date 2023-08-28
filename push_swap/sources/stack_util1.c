/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_util1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooahn <jooahn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:59:49 by jooahn            #+#    #+#             */
/*   Updated: 2023/08/28 21:20:34 by jooahn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"
#include "stdlib.h"

void	swap(t_stack *stack)
{
	int		temp;
	t_list	*top;

	if (ft_lstsize(stack->top) < 2)
		return ;
	top = stack->top;
	temp = top->content;
	top->content = top->next->content;
	top->next->content = temp;
}

void	push(t_stack *from, t_stack *to)
{
	if (isEmpty(from))
		return ;
	add_front(to, pop_front(from));
}

void	rotate(t_stack *stack)
{
	if (isEmpty(stack))
		return ;
	add_back(stack, pop_front(stack));
}

void	reverse_rotate(t_stack *stack)
{
	if (isEmpty(stack))
		return ;
	add_front(stack, pop_back(stack));
}

t_list	*pop_front(t_stack *stack)
{
	t_list	*target;

	if (isEmpty(stack))
		return (NULL);
	target = stack->top;
	stack->top = stack->top->next;
	stack->top->prv = NULL;
	target->next = NULL;
	return (target);
}

t_list	*pop_back(t_stack *stack)
{
	t_list	*target;

	if (isEmpty(stack))
		return (NULL);
	target = stack->bottom;
	stack->bottom = stack->bottom->prv;
	stack->bottom->next = NULL;
	target->prv = NULL;
	return (target);
}

void	add_front(t_stack *stack, t_list *new)
{
	ft_lstadd_front(&(stack->top), new);
	stack->top = new;
}

void	add_back(t_stack *stack, t_list *new)
{
	ft_lstadd_back(&(stack->top), new);
	stack->bottom = new;
}

int	isEmpty(t_stack *stack)
{
	if (ft_lstsize(stack->top) < 1)
		return (1);
	return (0);
}

void	print_stack(t_stack *stack)
{
	ft_lstiter(stack->top, print);
}

void	print(int content)
{
	ft_printf("%d\n", content);
}
