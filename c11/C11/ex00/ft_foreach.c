/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:57:40 by yshi              #+#    #+#             */
/*   Updated: 2025/03/10 19:44:17 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
//
//#include <unistd.h>
//
//void	ft_putnbr(int nb)
//{
//	char	nb_char;
//
//	if (nb == -2147483648)
//		write(1, "-2147483648", 11);
//	else if (nb < 0)
//	{
//		write(1, "-", 1);
//		ft_putnbr(nb * -1);
//	}	
//	else if (nb <= 9)
//	{	
//		nb_char = nb + '0';
//		write(1, &nb_char, 1);
//	}
//	else
//	{
//		ft_putnbr(nb / 10);
//		ft_putnbr(nb % 10);
//	}
//}
//int	main(void)
//{
//	int tab[] = {11,234,5};
//	ft_foreach(tab, 3, &ft_putnbr);
//}
