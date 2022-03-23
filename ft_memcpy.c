/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 12:09:46 by kle               #+#    #+#             */
/*   Updated: 2022/02/28 18:42:10 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_ptr;
	const char	*src_ptr;

	dst_ptr = dst;
	src_ptr = src;
	if (src_ptr == NULL && dst_ptr == NULL)
		return (0);
	while (n > 0)
	{
		*dst_ptr = *src_ptr;
		dst_ptr++;
		src_ptr++;
		n--;
	}
	return (dst);
}
