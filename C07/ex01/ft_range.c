/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:07:16 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/08 19:07:20 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*res;
	int	i;

	len = max - min;
	i = 0;
	if (min >= max)
		return (0);
	res = (int *)malloc(sizeof(int) * (len - 1));
	if (!res)
	{
		return (0);
	}
	while (i < len)
	{
		res[i] = i + min;
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
int     main(void)
{
    int *test;
    test = ft_range(1, 10);
    int i;
    i = 0;
    while (i != 19)
    {
        printf("%d", test[i]);
        i++;
    }
    
    return 0;
}
*/