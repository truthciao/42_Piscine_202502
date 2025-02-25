/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:18:02 by yshi              #+#    #+#             */
/*   Updated: 2025/02/20 14:15:28 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		nb_ascii;
	char	minus;

	minus = '-';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, &minus, 1);
		ft_putnbr(nb * (-1));
	}
	else if (nb <= 9)
	{	
		nb_ascii = nb + 48;
		write(1, &nb_ascii, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}		
}
// 
// int	main(void)
// {
// 	ft_putnbr(-402);
// }
