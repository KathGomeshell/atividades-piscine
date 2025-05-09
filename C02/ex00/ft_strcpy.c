/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-souz <kde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 13:33:50 by kde-souz          #+#    #+#             */
/*   Updated: 2025/05/08 20:27:45 by kde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char	src[50];
	char	dest[50];

	src[0] = 'O';
	src[1] = 'l';
	src[2] = 'a';
	src[3] = ',';
	src[4] = ' ';
	src[5] = 'm';
	src[6] = 'u';
	src[7] = 'n';
	src[8] = 'd';
	src[9] = 'o';
	src[10] = '!';
	src[11] = '\0';
	ft_strcpy(dest, src);
	ft_putstr("Resultado da cópia: ");
	ft_putstr(dest);
	ft_putstr("\n");
	return (0);
}
*/