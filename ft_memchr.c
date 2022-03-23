/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:39:44 by kle               #+#    #+#             */
/*   Updated: 2022/02/28 19:02:03 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdlib.h>*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return (ptr + i);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	const char *s;
	int c;
	const char *s2;
	int c2;

	s = "abcdjbk";
	c = 'j';
	s2 = "abcdjbk";
	c2 = 'j';
	printf("%s\n", ft_memchr(s, c, 0));
	printf("%s\n", memchr(s2, c2, 0));
	return (0);
}*/
