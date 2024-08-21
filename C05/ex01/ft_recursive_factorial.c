/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:38:27 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/20 18:41:25 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 2)
	{
		num = ft_recursive_factorial(nb - 1);
		num = num * nb;
		nb--;
	}
	else
		num = nb;
	return (num);
}
