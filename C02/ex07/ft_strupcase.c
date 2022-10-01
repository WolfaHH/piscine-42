/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 02:21:30 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/04 02:21:32 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*str_ptr;

	str_ptr = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
		{
			*str -= ('a' - 'A');
		}
		str++;
	}
	return (str_ptr);
}

//int	main(){	char str[] = "HKHLK 94798756dflg fodgdfg54654/*56"; 
//printf("%s", ft_strupcase(str));}
