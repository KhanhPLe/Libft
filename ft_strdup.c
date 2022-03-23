/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 21:24:13 by kle               #+#    #+#             */
/*   Updated: 2022/03/08 22:02:57 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	i = (ft_strlen(s1) + 1);
	s2 = malloc(sizeof(*s2) * i);
	if (s1 == NULL)
		return (0);
	ft_strlcpy(s2, s1, i);
	return (s2);
}
