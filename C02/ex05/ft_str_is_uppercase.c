/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-souz <kde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:44:13 by kde-souz          #+#    #+#             */
/*   Updated: 2025/05/08 19:48:57 by kde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("ABC"));
	printf("%d\n", ft_str_is_uppercase("AbC"));
	printf("%d\n", ft_str_is_uppercase("ABC123"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);
}
*/