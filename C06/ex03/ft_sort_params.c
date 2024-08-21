/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:14:12 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/21 16:25:05 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*a;

	a = *s1;
	*s1 = *s2;
	*s2 = a;
}

void	ft_putchar(char **args, int size, int o)
{
	int	i;

	while (o < size)
	{
		i = 0;
		while (args[o][i])
			i++;
		write(1, args[o], i);
		write(1, "\n", 1);
		o++;
	}
}

int	verifica(char **args, int o, int i)
{
	if ((args[o][i] || args[o + 1][i]) && (args[o][i] == args[o + 1][i]))
		return (1);
	return (0);
}

int	main(int size, char **args)
{
	int	i;
	int	o;

	o = 1;
	if (size < 2)
		return (0);
	while (o < size - 1)
	{
		i = 0;
		if (args[o][i] == args[o + 1][i])
		{
			while (verifica(args, o, i) == 1)
				i++;
		}
		if (args[o][i] > args[o + 1][i])
		{
			ft_swap(&args[o], &args[o + 1]);
			o = 0;
		}
		o++;
	}
	ft_putchar(args, size, 1);
}
