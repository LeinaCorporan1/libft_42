/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorpora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:25:23 by lcorpora          #+#    #+#             */
/*   Updated: 2022/01/07 18:50:08 by lcorpora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	dst_len;

	i = 0;
	if (!s)
		return (NULL);
	dst_len = ft_strlen(s);
	if ((size_t)start > dst_len)
		return (ft_strdup(""));
	if (len < dst_len)
		dst_len = len;
		dest = (char *)malloc(sizeof(char) * dst_len + 1);
	if (!dest)
		return (NULL);
	while (s[start] && i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
