/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 08:46:11 by yshi              #+#    #+#             */
/*   Updated: 2025/02/20 10:03:54 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_comb(int first_ascii, int second_ascii,
			int third_ascii, char *spliter)
{
	write (1, &first_ascii, 1);
	write (1, &second_ascii, 1);
	write (1, &third_ascii, 1);
	if (!(first_ascii == 55
			&&second_ascii == 56
			&& third_ascii == 57))
		write (1, spliter, 2);
}

void	ft_print_comb(void)
{
	int		number_1_ascii;
	int		number_2_ascii;
	int		number_3_ascii;
	char	*spliter;

	number_1_ascii = 48;
	spliter = ", ";
	while (number_1_ascii <= 57)
	{
		number_2_ascii = number_1_ascii + 1;
		while (number_2_ascii <= 57)
		{
			number_3_ascii = number_2_ascii + 1;
			while (number_3_ascii <= 57)
			{
				write_comb(number_1_ascii, number_2_ascii,
					number_3_ascii, spliter);
				number_3_ascii ++;
			}
			number_2_ascii ++;
		}
		number_1_ascii ++;
	}
}
//
// int main()
// {
// 	ft_print_comb();
// }
