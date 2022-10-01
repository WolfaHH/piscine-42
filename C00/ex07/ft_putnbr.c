/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:42:21 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/01 16:42:23 by ngodard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	split(int n)
{
	int	i;
	int	tmp;

	if (n > 0)
	{
		i = n % 10;
		n = n / 10;
		split(n);
		tmp = 48 + i;
		write(1, &tmp, 1);
	}
}

int	ft_putnbr(int nb)
{
	int	ya;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb == 0)
	{
		ya = 48;
		write(1, &ya, 1);
		return (0);
	}
	split(nb);
	return (0);
}

/*
int main()
{
    int n = -2147483648;
    ft_putnbr(n);
    return (0);
}
*/