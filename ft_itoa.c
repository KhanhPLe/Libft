/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:12:17 by kle               #+#    #+#             */
/*   Updated: 2022/03/11 21:23:23 by kle              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numsize(int n)
{
	unsigned int	size;

	size = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		size += 1;
	}
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	a;
	unsigned int	size;

	size = numsize(n);
	str = malloc(sizeof(char) * size + 1);
	if (str == 0)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		a = -n;
	}
	else
		a = n;
	if (a == 0)
		str[0] = '0';
	str[size] = '\0';
	while (a != 0)
	{
		str[size - 1] = (a % 10) + '0';
		a = a / 10;
		size--;
	}
	return (str);
}
