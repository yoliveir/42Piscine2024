/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <yurolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:40:10 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/13 16:45:53 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_alpha(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		return (1);
	else if (str[i] >= 'A' && str[i] <= 'Z')
		return (2);
	else if (str[i] >= '0' && str[i] <= '9')
		return (3);
	else
		return (0);
}

int	ft_capitalize_word(char *str, int i)
{
	if (ft_check_alpha(str, i) == 1)
		str[i] = str[i] - 32;
	i++;
	while (ft_check_alpha(str, i) != 0 && str[i] != 0)
	{
		if (ft_check_alpha(str, i) == 2)
			str[i] = str[i] + 32;
		i++;
	}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (ft_check_alpha(str, i) != 0)
			i = ft_capitalize_word(str, i);
		else
			i++;
	}
	return (str);
}
