/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kde-souz <kde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:25:48 by kde-souz          #+#    #+#             */
/*   Updated: 2025/05/08 19:32:53 by kde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("123456"));
	printf("%d\n", ft_str_is_numeric("42a3"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}
*/