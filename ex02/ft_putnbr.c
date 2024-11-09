/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 18:48:14 by vinda-si          #+#    #+#             */
/*   Updated: 2024/09/05 18:07:58 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int		count;
	char	list[10];

	if (nb == 0)
		write(1, "0", 1);
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	count = 0;
	while (nb > 0)
	{
		list[count++] = (nb % 10) + 48;
		nb = nb / 10;
	}
	count--;
	while (count >= 0)
		write(1, &list[count--], 1);
}
