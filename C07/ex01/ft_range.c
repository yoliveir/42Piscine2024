/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:46:12 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/29 15:55:39 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
		return (0);
	p = malloc((max - min) * sizeof(int));
	if (p == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*p;
	int	i;

	i = 0;
	p = ft_range(0,  20);
	while (i < 20)
	{
		printf("%d ", p[i]);
		i++;
	}
	free(p);
}*/
