/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:26:17 by kle               #+#    #+#             */
/*   Updated: 2022/03/11 20:33:22 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	j = (ft_strlen(s1) - 1);
	while (s1[j] && ft_strchr(set, s1[j]) && j > i)
	{
		j--;
	}
	len = (j - i) + 1;
	return (ft_substr(s1, i, len));
}
/* 24. checking if s1[i] is inside "set"
 * 28. get j to the last character of s1
 * 29. checking if s1[j] is inside "set" at the back of s1
 * 33. the length of trimmed string
 * 34. cut string s1 from i to len
 * */
