/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jooahn <jooahn@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:03:28 by jooahn            #+#    #+#             */
/*   Updated: 2023/03/22 16:33:19 by jooahn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	int		digit;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = 0;
	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
	}
	while (--len >= i)
	{
		digit = n % 10;
		if (digit < 0)
			digit *= -1;
		str[len] = digit + '0';
		n /= 10;
	}
	return (str);
}
