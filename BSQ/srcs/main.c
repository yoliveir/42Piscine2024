/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:20:38 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/26 15:20:40 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

// char	**rd_file(char *ism, char **map, int *size, int *ft)
// {
// 	char	*buffer;
// 	int		x;
// 	int		y;

// 	buffer = NULL;
// 	*ft = open(ism, O_RDONLY);
// 	if (*ft != -1)
// 	{
// 		buffer = fillbuffer(*ft, buffer, ism);
// 		x = mapsize(buffer);
// 		map = (char **)malloc(x * sizeof(char *));
// 		if (map == NULL)
// 			return (0);
// 		y = 0;
// 		while (y < x)
// 		{
// 			map[y] = (char *)malloc(x * sizeof(char));
// 			if (map[y] == NULL)
// 				return (0);
// 			y++;
// 		}
// 		*size = mapsize(buffer);
// 		doldur(buffer, map);
// 		free(buffer);
// 	}
// 	return (map);
// }

int	main(int argc, char **maps)
{
	int		i;
	char	*map;
	int		size;

	i = 1;
	while (i <= argc)
	{
		map = NULL;
		size = 0;
		map = rd_file(maps[i], map, &size);



		pvt = gezcontrol(map, size);
		if (pvt.size == 0)
		{
			write(1, "Error!\n", 7);
		}
		else
		{
			map = kareyap(map, pvt);
			yazdir(map, size);
		}
		free(map);
		i++;
	}
	return (0);
}
