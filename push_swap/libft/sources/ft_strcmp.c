/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooahn <jooahn@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 23:33:56 by jooahn            #+#    #+#             */
/*   Updated: 2023/08/22 23:42:02 by jooahn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	if (ft_strlen(s1) != ft_strlen(s2))
		return (1);
	idx = 0;
	while (s1[idx])
	{
		if (s1[idx] != s2[idx])
			return (1);
		idx++;
	}
	return (0);
}
