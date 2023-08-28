/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooahn <jooahn@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 22:22:59 by jooahn            #+#    #+#             */
/*   Updated: 2023/08/28 21:35:08 by jooahn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

int	main(int ac, char *av[])
{
	int		idx;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (!is_valid(ac, av))
	{
		ft_printf("Error\n");
		return (0);
	}
	stack_a = get_stack('a');
	stack_b = get_stack('b');
	idx = 1;
	while (idx < ac)
	{
		add_back(stack_a, ft_lstnew(ft_atoi(av[idx])));
		idx++;
	}
	// ft_printf("original:\n");
	// print_stack(stack_a);
	// swap(stack_a);
	// ft_printf("swap:\n");
	// print_stack(stack_a);
	// swap(stack_a);
	// ft_printf("swap2:\n");
	// print_stack(stack_a);
	push(stack_a, stack_b);
	ft_printf("push a to b:\n");
	ft_printf("stack_a:\n");
	print_stack(stack_a);
	// ft_printf("stack_b :\n");
	// print_stack(stack_b);
	// rotate(stack_a);
	// ft_printf("rotate a:\n");
	// print_stack(stack_a);
	// rotate(stack_a);
	// ft_printf("rotate a:\n");
	// print_stack(stack_a);
	// reverse_rotate(stack_a);
	// ft_printf("reverse rotate a:\n");
	// print_stack(stack_a);
	// reverse_rotate(stack_a);
	// ft_printf("reverse rotate a:\n");
	// print_stack(stack_a);
}
