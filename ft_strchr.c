/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 09:36:20 by kle               #+#    #+#             */
/*   Updated: 2022/03/15 22:15:38 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*ptr;

	i = 0;
	ch = (char)c;
	if (!s)
	{
		return (0);
	}
	while (s[i] != '\0')
	{
		if (s[i] == ch)
		{
			ptr = (char *)s + i;
			return (ptr);
		}
		i++;
	}
	if (s[i] == ch)
	{
		ptr = (char *)s + i;
		return (ptr);
	}
	return (0);
}
/* #include <stdio.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char *s;
	int c;

	s = "abcdababcajbk";
	c = 'd';
	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
	return (0);
}*/
