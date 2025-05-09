/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-souz <kde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 14:35:58 by kde-souz          #+#    #+#             */
/*   Updated: 2025/04/30 03:42:48 by kde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alfabeto;

	alfabeto = 'z';
	while (alfabeto >= 'a')
	{
		write(1, &alfabeto, 1);
		alfabeto--;
	}
}
