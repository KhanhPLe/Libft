/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 11:00:18 by kle               #+#    #+#             */
/*   Updated: 2022/02/28 18:36:08 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*#include <unistd.h>
#include <stdio.h>
#include <strings.h>
int	main (void)
{
	char	s[5];

	s[0] = 'a';
	s[1] = 'b';
	ft_bzero(s + 1, 2);
	printf("%s\n", s);
	return (0);
}*/
