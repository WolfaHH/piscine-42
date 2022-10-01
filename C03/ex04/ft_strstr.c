/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:29:27 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/05 14:29:32 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}

/*
int main()
{
    char str1[] = "yop";
    char str2[50] = "sdfgsdgkjl yopgjshdkgjsl";
    char str3[] = "yip";
    char str4[50] = "ssdfglkjmdsldkjgl";
    char str5[] = "";
    char str6[50] = "bou";

    printf("%s\n", ft_strstr(str2, str1));
	printf("%s\n", strstr(str2, str1));
    printf("%s\n", "--------------------");
    printf("%s\n", ft_strstr(str4, str3));
	printf("%s\n", strstr(str4, str3));
    printf("%s\n", "--------------------");
    printf("%s\n", ft_strstr(str6, str5));
	printf("%s\n", ft_strstr(str6, str5));
    return 0;
}
*/
