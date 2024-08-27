/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <yurolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:39:20 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/27 15:45:07 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alp;

	alp = 'z';
	while (alp >= 'a' )
	{
		write(1, &alp, 1);
		alp -= 1;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
