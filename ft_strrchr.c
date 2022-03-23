/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:16:55 by kle               #+#    #+#             */
/*   Updated: 2022/03/15 22:15:31 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*ptr;

	ch = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == ch)
		{
			ptr = (char *)s + i;
			return (ptr);
		}
		i--;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char *s;
	int c;

	s = "abcdababcajbk";
	c = 'a';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}*/
