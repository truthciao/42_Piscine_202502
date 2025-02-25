/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:01:38 by yshi              #+#    #+#             */
/*   Updated: 2025/02/20 11:14:41 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_2_digits(int number)
{	
	int	number_ascii;
	int	zero_ascii;
	int	tens_ascii;
	int	ones_ascii;

	zero_ascii = 48;
	if (number < 10)
	{
		number_ascii = number + zero_ascii;
		write (1, &zero_ascii, 1);
		write (1, &number_ascii, 1);
	}	
	else
	{
		tens_ascii = number / 10 + zero_ascii;
		ones_ascii = number % 10 + zero_ascii;
		write (1, &tens_ascii, 1);
		write (1, &ones_ascii, 1);
	}
}

void	write_comb2(int number_1, int number_2)
{
	char	*spliter;
	char	space;

	spliter = ", ";
	space = ' ';
	write_2_digits(number_1);
	write (1, &space, 1);
	write_2_digits(number_2);
	if (!(number_1 == 98 && number_2 == 99))
		write (1, spliter, 2);
}

void	ft_print_comb2(void)
{
	int	number_1;
	int	number_2;

	number_1 = 0;
	while (number_1 <= 99)
	{
		number_2 = number_1 + 1;
		while (number_2 <= 99)
		{
			write_comb2(number_1, number_2);
			number_2 ++;
		}
		number_1 ++;
	}
}
// 
// int	main()
// {
// 	ft_print_comb2();
// }
