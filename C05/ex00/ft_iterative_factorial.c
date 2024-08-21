/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:34:06 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/21 15:53:11 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	num = nb;
	nb--;
	while (nb > 1)
	{
		num = num * nb;
		nb--;
	}
	return (num);
}
