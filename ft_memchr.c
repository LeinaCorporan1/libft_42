/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorpora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:32:17 by lcorpora          #+#    #+#             */
/*   Updated: 2021/12/16 17:57:28 by lcorpora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(void *s, char c, int num)
{
	int				i;
	unsigned char	*str;
	void			*dst;

	str = s;
	i = 0;
	while (i < num)
	{
		if (str[i] == (unsigned char)c)
		{
			dst = (void *)str;
			return (&dst[i]);
		}
		i++;
	}
	return (NULL);
}
