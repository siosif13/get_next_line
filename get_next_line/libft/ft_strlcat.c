/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siosif <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 18:50:07 by siosif            #+#    #+#             */
/*   Updated: 2017/12/19 16:44:21 by siosif           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && str && str[i])
		i++;
	return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_dst;
	size_t	s_src;
	size_t	n_size;

	s_dst = ft_strnlen(dst, size);
	s_src = ft_strlen(src);
	n_size = size - s_dst;
	dst += s_dst;
	if (n_size > 0)
	{
		ft_strncpy(dst, src, n_size);
		dst[n_size - 1] = '\0';
	}
	return (s_dst + s_src);
}
