/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:44:54 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/12 16:44:56 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 2)
	{
		return (2);
	}
	if (nb % 2 == 0)
	{
		nb++;
	}
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			nb = nb + 2;
			i = 1;
		}
		i = i + 2;
	}
	return (nb);
}

/*
int main(void)
{
    printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(3));
    printf("%d\n", ft_find_next_prime(8));
	printf("%d\n", ft_find_next_prime(12));
    printf("%d\n", ft_find_next_prime(16));
	printf("%d\n", ft_find_next_prime(21));
    printf("%d\n", ft_find_next_prime(29));
	printf("%d\n", ft_find_next_prime(1302));
    printf("%d\n", ft_find_next_prime(1920));
	printf("%d\n", ft_find_next_prime(7875));
    return 0;
}
*/
