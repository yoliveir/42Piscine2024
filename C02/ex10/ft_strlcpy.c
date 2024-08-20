/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:49:31 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/13 17:49:34 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (src[length] != 0)
		length++;
	if (size == 0)
		return (length);
	while (src[i] != 0 && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (length);
}
