/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-souz <kde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:52:11 by kde-souz          #+#    #+#             */
/*   Updated: 2025/05/08 19:57:53 by kde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_printable("Hello!"));
	printf("%d\n", ft_str_is_printable("Hi\n"));
	printf("%d\n", ft_str_is_printable(""));
	return (0);
}
*/