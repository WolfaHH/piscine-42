/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 02:19:06 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/04 02:19:11 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_ptr;

	dest_ptr = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_ptr);
}

/*int main () {
	char src[]= "test mec";
	char a[100];
	ft_strcpy(a, src);
	//printf("Final copied string : %s\n", a);}
	printf("Final copied string : %s\n", ft_strcpy(a, src));
}*/
