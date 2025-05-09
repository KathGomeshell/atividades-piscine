/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-souz <kde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:35:27 by kde-souz          #+#    #+#             */
/*   Updated: 2025/05/08 19:43:32 by kde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("abc"));
	printf("%d\n", ft_str_is_lowercase("Abc"));
	printf("%d\n", ft_str_is_lowercase("abc123"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
*/
