/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 22:08:04 by yshi              #+#    #+#             */
/*   Updated: 2025/02/23 10:49:29 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_hex(int dec)
{
	int	div;
	int	mod;
	int	div_char;
	int	mod_char;

	div = dec / 16;
	mod = dec % 16;
	div_char = div + '0';
	write (1, &div_char, 1);
	if (mod <= 9)
	{
		mod_char = mod + '0';
		write (1, &mod_char, 1);
	}
	else
	{
		mod_char = mod - 10 + 'a';
		write (1, &mod_char, 1);
	}		
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			write (1, "\\", 1);
			print_hex(str[i]);
		}
		else
			write (1, &str[i], 1);
		i ++;
	}	
}
//
//int	main(void)
//{
//	char	str[50] = "Coucou\ntu vas bien ?";
//	ft_putstr_non_printable(str);
//}
