/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifier.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooahn <jooahn@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 23:50:21 by jooahn            #+#    #+#             */
/*   Updated: 2023/08/22 23:59:33 by jooahn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	has_duplication(int ac, char *inputs[]);

int	is_valid(int ac, char *inputs[])
{
	int		idx;
	long	num;

	idx = 1;
	while (idx < ac)
	{
		if (!ft_isnum(inputs[idx]))
			return (0);
		num = ft_strtol(inputs[idx]);
		if (num > FT_INT_MAX || num < -FT_INT_MAX - 1)
			return (0);
		idx++;
	}
	if (has_duplication(ac, inputs))
		return (0);
	return (1);
}

int	has_duplication(int ac, char *inputs[])
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(inputs[i], inputs[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
