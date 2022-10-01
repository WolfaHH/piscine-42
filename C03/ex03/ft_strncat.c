/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 02:05:04 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/05 02:05:11 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
    char str1[] = "yop";
    char str2[20] = "yap";
    char str3[] = "yip";
    char str4[20] = "yup";
    char str5[] = "";
    char str6[20] = "bou";

    printf("%s\n", ft_strncat(str2, str1, 2));
    printf("%s\n", "--------------------");
    printf("%s\n", ft_strncat(str4, str3, 0));
    printf("%s\n", "--------------------");
    printf("%s\n", ft_strncat(str6, str5, 5));
    return 0;
}
*/
