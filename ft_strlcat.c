/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 19:36:10 by kle               #+#    #+#             */
/*   Updated: 2022/03/11 18:44:08 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (dst[i] && i < dstsize)
	{
		i++;
	}
	j = 0;
	while (src[j] && (i + j) < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
