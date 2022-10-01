/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:22:50 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/21 16:22:52 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	verifseparator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	strlensep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !verifseparator(str[i], charset))
		i++;
	return (i);
}

int	countstrings(char *str, char *charset)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && verifseparator(str[i], charset))
			i++;
		if (str[i])
			c++;
		while (str[i] && !verifseparator(str[i], charset))
			i++;
	}
	return (c);
}

char	*putword(char *str, char *charset)
{
	int		len;
	int		i;
	char	*mot;

	i = 0;
	len = strlensep(str, charset);
	mot = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		mot[i] = str[i];
		i++;
	}
	mot[i] = '\0';
	return (mot);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;

	i = 0;
	res = (char **)malloc(sizeof(char *)
			* (countstrings(str, charset) + 1));
	while (*str)
	{
		while (*str && verifseparator(*str, charset))
			str++;
		if (*str)
		{
			res[i] = putword(str, charset);
			i++;
		}
		while (*str && !verifseparator(*str, charset))
			str++;
	}
	res[i] = 0;
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	int		index;
	char	**split;
	split = ft_split("re test   ga", " ");
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}
*/
