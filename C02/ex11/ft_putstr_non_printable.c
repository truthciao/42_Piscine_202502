/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:08:04 by yshi              #+#    #+#             */
/*   Updated: 2025/02/24 16:55:13 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	new_print_hex( char c)
{
	char			*hexbase;
	unsigned char	ch;
	unsigned char	base;

	ch = (unsigned char) c;
	base = 15;
	hexbase = "0123456789abcdef";
	write(1, hexbase + (ch >> 4), 1);
	write(1, hexbase + (ch & base), 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write (1, &str[i], 1);
		else
		{
			write (1, "\\", 1);
			new_print_hex(str[i]);
		}
		i ++;
	}	
}
//
//int	main(void)
//{
//	char	str1[] = "Coucou\ntu vas bien ?";
//	char	str2[] = "\t\n\vdjhf\x7Fsjdhfk";
//
//	str1[5] = (unsigned char) 255;
//
//	ft_putstr_non_printable(str1);
//	ft_putstr_non_printable(str2);
//}
