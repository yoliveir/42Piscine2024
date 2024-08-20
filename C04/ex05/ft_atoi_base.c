/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:55:35 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/20 18:23:53 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	digit(char s, char *base)
{
	int	n;

	n = 0;
	while (base[n] != 0 && base[n] != s)
		n++;
	return (n);
}

int	is_whitespace(char *base, int i)
{
	if (base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
		return (1);
	else if (base[i] == '-' || base[i] == '+')
		return (1);
	return (0);
}

int	verificar(char *base)
{
	int	i;
	int	o;

	i = 0;
	while (base[i])
	{
		o = 0;
		while (o < i)
		{
			if (base[i] == base[o] || is_whitespace(base, i) == 1)
				return (0);
			o++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	basesize;
	int	nb;
	int	neg;

	nb = 0;
	neg = 1;
	basesize = verificar(base);
	if (basesize <= 1)
		return (0);
	while (*str != 0 && ((*str >= 9 && *str <= 13) || *str == 32))
		str++;
	while (*str != 0 && (*str == '-' || *str == '+'))
	{
		if (*str++ == '-')
			neg *= -1;
	}
	while (*str != 0 && (digit(*str, base) < basesize))
	{
		nb = (basesize * nb) + (digit(*str, base));
		str++;
	}
	return (nb * neg);
}
/*
#include <stdio.h>
int	main(void)
{
	int	n;

	n = ft_atoi_base("123", "01234567");
	printf("%d", n);
}*/
