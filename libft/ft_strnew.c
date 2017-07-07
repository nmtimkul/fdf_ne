/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmtimkul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:40:32 by nmtimkul          #+#    #+#             */
/*   Updated: 2017/07/02 09:40:36 by nmtimkul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_string;
	size_t	i;

	i = 0;
	new_string = (char*)ft_memalloc(size + 1);
	while (i <= size && new_string != NULL)
	{
		new_string[i] = '\0';
		i++;
	}
	return (new_string);
}
