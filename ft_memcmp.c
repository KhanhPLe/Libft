/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:39:55 by kle               #+#    #+#             */
/*   Updated: 2022/02/28 14:36:53 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (ptr1 == 0 || ptr2 == 0)
		return (0);
	while (n)
	{
		if (*ptr1 != *ptr2)
		{
			return (*ptr1 - *ptr2);
		}
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	const char *s1;
	const char *s2;

	s1 = "abcdjbk";
	s2 = "abcd";
	printf("%d\n", ft_memcmp(s1, s2, 5));
	printf("%d\n", memcmp(s1, s2, 5));
	return (0);
}*/
