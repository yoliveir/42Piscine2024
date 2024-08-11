/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <yurolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:05:36 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/10 20:22:06 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x1;
	int	y1;

	x1 = 1;
	y1 = 1;
	while (y1 <= y && x > 0 && y > 0)
	{
		while (x1 <= x)
		{
			if ((x1 == 1 && y1 == 1) || (y1 == y && x1 == x))
				ft_putchar('/');
			else if ((x1 == x && y1 == 1) || (x1 == 1 && y1 == y))
				ft_putchar('\\');
			else if ((x1 == 1 || x1 == x) || (y1 == 1 || y1 == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			x1++;
		}
		ft_putchar('\n');
		y1++;
		x1 = 1;
	}
}
