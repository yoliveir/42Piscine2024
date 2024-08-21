/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:56:45 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/21 15:38:55 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	num;
	int	numinv;

	if (nb <= 1 || nb == 4)
		return (0);
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (0);
	num = 3;
	numinv = nb / 2;
	while (num <= numinv)
	{
		if (nb % num == 0)
			return (0);
		num += 2;
		numinv -= 2;
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_is_prime(22);
	printf("I: %d\n", i);
}*/
