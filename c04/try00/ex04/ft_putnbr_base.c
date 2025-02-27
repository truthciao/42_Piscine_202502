/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:12:12 by yshi              #+#    #+#             */
/*   Updated: 2025/02/27 12:11:44 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	count_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i ++;
	return (i);
}

int	valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || count_base(base) == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j ++;
		}	
		i ++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_long;
	int		base_len;
	char	nb_char;

	if (valid_base(base))
	{	
		nbr_long = (long) nbr;
		base_len = count_base(base);
		if (nbr_long < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base(nbr_long * -1, base);
		}	
		else if (nbr_long <= (base_len - 1))
		{	
			nb_char = base[nbr_long];
			write(1, &nb_char, 1);
		}
		else
		{
			ft_putnbr_base(nbr_long / base_len, base);
			ft_putnbr_base(nbr_long % base_len, base);
		}
	}
}

#include <stdio.h>
int	main(void)
{
	char *base10 = "0123456789";
	char *base2 = "01";
	char *base8	= "poneyvif";
	char *base16 = "0123456789ABCDEF";
	char *base_0 = "";
	char *base_1 = "123435";
	char *base_2 = "23+45";
	
	int	nbr = 387680;
	ft_putnbr_base(nbr, base2);
	printf("\n");
	ft_putnbr_base(nbr, base8);
	printf("\n");
	ft_putnbr_base(nbr, base10);
	printf("\n");
	ft_putnbr_base(nbr, base16);
	printf("\n");
	ft_putnbr_base(nbr, base_0);
	printf("\n");
	ft_putnbr_base(nbr, base_1);
	printf("\n");
	ft_putnbr_base(nbr, base_2);
	printf("\n");
}
