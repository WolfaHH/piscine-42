/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 02:21:48 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/04 02:21:51 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*str_ptr;

	str_ptr = str;
	while (*str)
	{
		if ('A' <= *str && *str <= 'Z')
		{
			*str += ('a' - 'A');
		}
		str++;
	}
	return (str_ptr);
}

//int    main(){    char str[] = "FGJDFDFglkj 89374o dflkgng";
//printf("%s", ft_strlowcase(str));}
