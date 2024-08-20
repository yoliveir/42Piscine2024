/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:10:15 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/20 18:21:29 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while (str[c] && ((str[c] >= 9 && str[c] <= 13) || str[c] == 32))
		c++;
	while (str[c] && (str[c] == '+' || str[c] == '-'))
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] && (str[c] >= '0' && str[c] <= '9'))
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * s);
}

/*#include <stdio.h>
int	main(void)
{
	int	n;

	n = ft_atoi(" ---+--+1234ab567");
	printf("%d", n);
}*/
