/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngodard <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 10:09:39 by ngodard           #+#    #+#             */
/*   Updated: 2022/09/04 16:25:40 by gpollet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
int	main(void)
{
	write(1, "\n\n", 2);
	write(1, "######  Rush(3, 3)  ######", 27);
	write(1, "\n\n", 2);
	rush(3, 3);

	write(1, "\n\n", 2);
	write(1, "######  Rush(12, 3)  ######", 27);
	write(1, "\n\n", 2);
	rush(12, 3);

	write(1, "\n\n", 2);
	write(1, "######  Rush(4, 9)  ######", 27);
	write(1, "\n\n", 2);
	rush(4, 9);

	write(1, "\n\n", 2);
	write(1, "######  Rush(1, 1)  ######", 27);
	write(1, "\n\n", 2);
	rush(1, 1);

	write(1, "\n\n", 2);
	write(1, "######  Rush(3, 1)  ######", 27);
	write(1, "\n\n", 2);
	rush(3, 1);

	write(1, "\n\n", 2);
	write(1, "######  Rush(1, 4)  ######", 27);
	write(1, "\n\n", 2);
	rush(1, 4);

	write(1, "\n\n", 2);
	write(1, "######  Rush(0, 5)  ######", 27);
	write(1, "\n\n", 2);
	rush(0, 5);

	write(1, "\n\n", 2);
	write(1, "######  Rush(2, 2)  ######", 27);
	write(1, "\n\n", 2);
	rush(2, 2);

	write(1, "\n\n", 2);
	return (0);
}
