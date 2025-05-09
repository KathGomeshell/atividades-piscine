/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-souz <kde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 05:22:23 by kde-souz          #+#    #+#             */
/*   Updated: 2025/05/07 06:15:23 by kde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	char	length[13];
	int		tamanho;

	length[0] = '4';
	length[1] = '2';
	length[2] = ' ';
	length[3] = 's';
	length[4] = 'a';
	length[5] = 'o';
	length[6] = ' ';
	length[7] = 'p';
	length[8] = 'a';
	length[9] = 'u';
	length[10] = 'l';
	length[11] = 'o';
	length[12] = '\0';
	tamanho = ft_strlen(length);
	printf("Tamanho: %d\n", tamanho);
	return (0);
}
*/