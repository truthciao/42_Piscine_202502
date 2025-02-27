/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:46:31 by yshi              #+#    #+#             */
/*   Updated: 2025/02/27 10:31:55 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i ++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base_len(base) == 1)
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

int	index_in_base(char ch, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (ch == base[index])
			return (index);
		index ++;
	}
	return (-1);
}

int	is_num(char ch, char *base)
{
	while (*base)
	{
		if (ch == *base)
			return (1);
		base ++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	if (!is_valid_base(base))
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (is_num(str[i], base))
	{
		num = num * base_len(base) + index_in_base(str[i], base);
		i ++;
	}
	return (num * sign);
}
//
//#include <stdio.h>
//int	main(void)
//{
//	char *base10 = "0123456789";
//	char *base2 = "01";
//	char *base8	= "poneyvif";
//	char *base16 = "0123456789ABCDEF";
//	char *base_0 = "";
//	char *base_1 = "123435";
//	char *base_2 = "23+45";
//	
//	char *str10 = "   +----356 21";
//	char *str2 = "  \t011111112353"; //127
//	char *str16 = " ---22uooo"; //34
//
//	printf("base10 test:%s\t|%d\n", str10, ft_atoi_base(str10, base10));
//	printf("base2 test:%s\t|%d\n", str2, ft_atoi_base(str2, base2));
//    printf("base16 test:%s\t\t|%d\n", str16, ft_atoi_base(str16, base16));
//	printf("base invaild test:%s\t|%d\n", str10, ft_atoi_base(str2, base_0));
//}
