/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:45:32 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/20 18:48:09 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	num;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power > 1)
	{
		num = ft_recursive_power(nb, power - 1);
		num = num * nb;
		nb--;
	}
	else
		num = nb;
	return (num);
}
