/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:18:51 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:18:57 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*rev(char *buf, int i)
{
	char	*fresh;
	int		j;

	j = 0;
	fresh = (char*)malloc(sizeof(char) * i);
	while (i)
		fresh[j++] = buf[--i];
	return (fresh);
}

char		*ft_itoa(int n)
{
	char	buf[12];
	int		i;
	int		min;

	if (n == 0)
		return ("0\0");
	i = 0;
	buf[i++] = '\0';
	min = (n < 0);
	if (min)
		n = n * -1;
	while (n)
	{
		buf[i++] = n % 10 + '0';
		n = (n - n % 10) / 10;
	}
	if (min)
		buf[i++] = '-';
	return (rev(buf, i));
}
