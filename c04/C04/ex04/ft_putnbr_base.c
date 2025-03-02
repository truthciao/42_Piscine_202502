/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:12:12 by yshi              #+#    #+#             */
/*   Updated: 2025/02/27 15:37:43 by yshi             ###   ########.fr       */
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
		if (base[i] == '+' || base[i] == '-' ||
			(ch >= '\t' && ch <= '\r') || ch == ' ')
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
	int		base_len;
	char	nb_char;

	nbr = (long) nbr;
	if (valid_base(base))
	{	
		base_len = count_base(base);
		if (nbr < 0)
		{
			write(1, "-", 1);
			ft_putnbr_base(-(nbr / base_len), base);
			ft_putnbr_base(-(nbr % base_len), base);
		}	
		else if (nbr <= (base_len - 1))
		{	
			nb_char = base[nbr];
			write(1, &nb_char, 1);
		}
		else
		{
			ft_putnbr_base(nbr / base_len, base);
			ft_putnbr_base(nbr % base_len, base);
		}
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *base10 = "0123456789";
// 	char *base2 = "01";
// 	char *base8	= "poneyvif";
// 	char *base16 = "0123456789ABCDEF";
// 	char *base_0 = "";
// 	char *base_1 = "123435";
// 	char *base_2 = "23+45";
	
// 	int	nbr = -2147483648;
// 	ft_putnbr_base(nbr, base2);
// 	printf("\n");
// 	ft_putnbr_base(nbr, base8);
// 	printf("\n");
// 	ft_putnbr_base(nbr, base10);
// 	printf("\n");
// 	ft_putnbr_base(nbr, base16);
// 	printf("\n");
// 	ft_putnbr_base(nbr, base_0);
// 	printf("\n");
// 	ft_putnbr_base(nbr, base_1);
// 	printf("\n");
// 	ft_putnbr_base(nbr, base_2);
// 	printf("\n");
// }

#include <stdio.h>
#include <limits.h>

int main()
{
    ft_putnbr_base(0, "01");
    printf("\n");
    ft_putnbr_base(15, "0123456789abcdef");
    printf("\n");
    ft_putnbr_base(-5, "helword");
    printf("\n");
    ft_putnbr_base(INT_MIN, "0123456789");
    printf("\n");
    ft_putnbr_base(INT_MAX, "0123456789");
    printf("\n");
    ft_putnbr_base(255, "0123456789abcdef");
    printf("\n");
    ft_putnbr_base(2, "01");
    printf("\n");
    ft_putnbr_base(INT_MAX, "01");    
    printf("\n");
    ft_putnbr_base(INT_MIN, "01");    
    printf("\n");
    printf("BadBases: \n");
    ft_putnbr_base(0, "");
    ft_putnbr_base(0, "Hello-");
    ft_putnbr_base(0, "+hi");
    ft_putnbr_base(0, "sneakyrepeat");
}