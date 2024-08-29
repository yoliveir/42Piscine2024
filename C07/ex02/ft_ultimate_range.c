/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:56:52 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/29 16:07:46 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (*range == 0)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
/*#include <stdio.h>
int	main(void)
{
	int	*p;
	int	i;
	int	*start;

	i = ft_ultimate_range(&p, 0, 20);
	start = p;
	printf("%d\n", i);
	while (i > 0)
	{
		printf("%d ", *p);
		p++;
		i--;
	}
	free(start);
}*/
