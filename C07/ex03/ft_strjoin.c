/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:55:38 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/15 13:55:43 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	nath_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*nath_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = nath_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;

	res = malloc(sizeof(char) * (size + 1));
	if (size == 0)
	{
		res = malloc(sizeof(char));
		*res = 0;
		return (res);
	}
	i = 0;
	while (i != size)
	{
		nath_strcat(res, strs[i]);
		if (i != size - 1)
		{
			nath_strcat(res, sep);
		}
		i++;
	}
	return (res);
}

/*
int main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "bouda";
	strs[1] = "jésus le sang,";
	strs[2] = "starfoulah les reufs";
	separator = "§";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}
*/
