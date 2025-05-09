/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-souz <kde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:18:51 by kde-souz          #+#    #+#             */
/*   Updated: 2025/05/08 20:23:20 by kde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
char	*ft_strlowcase(char *str);

int	main(void)
{
	char	texto[] = "Oi, TUDO Bem?";

	printf("Antes: %s\n", texto);
	ft_strlowcase(texto);
	printf("Depois: %s\n", texto);
	return (0);
}
*/