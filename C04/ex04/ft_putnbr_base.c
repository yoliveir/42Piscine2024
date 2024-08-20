/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:55:16 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/20 18:23:15 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base_rec(int nbr, char *base, int size)
{
	unsigned char	a;
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= (unsigned int)size)
		ft_putnbr_base_rec(n / size, base, size);
	a = base[n % size];
	write(1, &a, 1);
}

int	ft_ver_bas(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;

	s = 0;
	if (ft_ver_bas(base) == 1)
	{
		while (base[s] != '\0')
			s++;
		ft_putnbr_base_rec(nbr, base, s);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(123, "0123456789");
	write(1, "\n", 1);

	ft_putnbr_base(-123, "0123456789");
	write(1, "\n", 1);

	ft_putnbr_base(123, "01");
	write(1, "\n", 1);

	ft_putnbr_base(-123, "01");
	write(1, "\n", 1);

	ft_putnbr_base(123, "0123456789ABCDEF");
	write(1, "\n", 1);

	ft_putnbr_base(-255, "0123456789ABCDEF");
	write(1, "\n", 1);

	return (0);
}*/
