/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:08:44 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/29 17:33:14 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sizetotal(int size, char **strs, char *sep)
{
	int	length;
	int	i;
	int	o;

	o = 0;
	length = 0;
	while (o < size)
	{
		i = 0;
		while (strs[o][i])
			i++;
		length = length + i;
		o++;
	}
	i = 0;
	while (sep[i])
		i++;
	length = length + (i * (size - 1));
	return (length);
}

int	ft_concatenar(char **dest, char *src, int b)
{
	int	i;

	i = 0;
	while (src[i])
	{
		(*dest)[b] = src[i];
		i++;
		b++;
	}
	return (b);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		o;
	int		b;

	if (size == 0)
		return (malloc(1));
	s = malloc((sizetotal(size, strs, sep) + 1) * sizeof(char));
	if (s == 0)
		return (0);
	o = 0;
	b = 0;
	while (o < size)
	{
		b = ft_concatenar(&s, strs[o], b);
		if (o == (size - 1))
			break ;
		b = ft_concatenar(&s, sep, b);
		o++;
	}
	s[b] = '\0';
	return (s);
}
/*#include <stdio.h>
int	main(void)
{
	char	*text[10];

	text[0] = "Haciendo";
	text[1] = "el";
	text[2] = "Test";
	text[3] = "con";
	text[4] = "separador";
	text[5] = "\' | \'";
	text[6] = "y";
	text[7] = "con";
	text[8] = "size";
	text[9] = "10";

	printf("%s\n", ft_strjoin(10, text, " | "));
}*/
