/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:48:52 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/12 15:48:53 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	res;
	long	nbb;

	nbb = nb;
	res = 2;
	if (nbb >= 2)
	{
		while (res * res <= nbb)
		{
			if (res * res == nbb)
			{
				return (res);
			}
			res++;
		}		
	}
	if (nbb == 1)
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{
    printf("%d\n", ft_sqrt(2147302921));
    return 0;
}
*/
