/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:03:01 by kle               #+#    #+#             */
/*   Updated: 2022/03/18 15:25:52 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	sub_string = (char *)malloc(sizeof(*s) * (len + 1));
	if (sub_string == 0)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub_string[j] = s[i];
			j++;
		}
		i++;
	}
	sub_string[j] = '\0';
	return (sub_string);
}
