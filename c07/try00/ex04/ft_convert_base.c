/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:36:47 by yshi              #+#    #+#             */
/*   Updated: 2025/03/05 19:20:58 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	is_valid_base(char *base);

int	count_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i ++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base, char **nb_str)
{
	long	n;

	n = nbr;
	if (is_valid_base(base))
	{	
		if (n < 0)
		{
			**nb_str = '-';
			n *= -1;
			(*nb_str)++;
		}	
		if (n <= (count_base(base) - 1))
		{	
			**nb_str = base[n];
			(*nb_str)++;
		}
		else
		{
			ft_putnbr_base(n / count_base(base), base, nb_str);
			ft_putnbr_base(n % count_base(base), base, nb_str);
		}
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*num_str;
	char	*original;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	num_str = (char *)malloc(sizeof(char) * 50);
	if (num_str == NULL)
		return (NULL);
	original = num_str;
	ft_putnbr_base(num, base_to, &num_str);
	return (original);
}
//
//#include <limits.h>
//#include <stdio.h>
//int	main(void)
//{
//	char *base10 = "0123456789";
//	char *base2 = "01";
//	char *base8	= "01234567";
//	char *base16 = "0123456789ABCDEF";
//	char *base_0 = "";
//	char *base_1 = "123435";
//	char *base_2 = "23+45";
//
//	char *str = "101010";
//	printf("%s\t %s\n", str, ft_convert_base(str, base2, base16));
//}
