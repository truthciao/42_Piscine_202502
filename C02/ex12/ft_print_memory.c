/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 10:55:15 by yshi              #+#    #+#             */
/*   Updated: 2025/02/23 14:33:04 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr_hex(int nb)
{
	int	nb_ascii;
	
	if (nb <= 15)
	{	
		if (nb <= 9)
		{
			nb_ascii = nb + '0';
			write (1, &nb_ascii, 1);
		}
		else
		{
			nb_ascii = nb - 10 + 'a';
			write (1, &nb_ascii, 1);
		}
	}
	else
	{
		ft_putnbr_hex(nb / 16);
		ft_putnbr_hex(nb % 16);
	}		
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)	
	{
		while (j 
		ft_putnbr_hex(ptr[i]);
		i ++;
	}
	write (1, ": ", 2);
	return (addr);
}

int main(void)
{
	char str[] = "we are family Create a function that displays the memory area onscreen.• The display of this memory area should be split into three columns separated by a space:";
	ft_print_memory(&str, 20);
	write(1, str, 2);	
}

