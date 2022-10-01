/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 02:22:19 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/04 02:22:20 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			str++;
			continue ;
		}
		return (0);
	}
	return (1);
}

//int main(){printf("%d\n", ft_str_is_lowercase("ahfjsdf"));}
