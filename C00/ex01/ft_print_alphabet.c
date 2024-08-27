/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yurolive <yurolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:38:37 by yurolive          #+#    #+#             */
/*   Updated: 2024/08/27 15:44:32 by yurolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alp;

	alp = 'a';
	while (alp <= 'z' )
	{
		write(1, &alp, 1);
		alp += 1;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/
