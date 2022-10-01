/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:01:43 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/12 15:01:47 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
	{
		return (0);
	}
	i = 1;
	res = 1;
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}

/*
int main(void)
{
    printf("%d\n", ft_iterative_factorial(5));
    return 0;
}
*/
