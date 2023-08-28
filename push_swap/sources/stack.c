/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooahn <jooahn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:35:03 by jooahn            #+#    #+#             */
/*   Updated: 2023/08/28 19:41:28 by jooahn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_stack	*new_stack(void)
{
	t_stack	*stack;
	int		a;

	a = 10;
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		exit(EXIT_FAILURE);
	stack->top = 0;
	stack->bottom = 0;
	return (stack);
}

t_stack	*get_stack(char type)
{
	static t_stack	stacks[2];

	if (type == 'a')
		return (&stacks[0]);
	if (type == 'b')
		return (&stacks[1]);
	return (NULL);
}
