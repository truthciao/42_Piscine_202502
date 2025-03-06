/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:46:31 by yshi              #+#    #+#             */
/*   Updated: 2025/03/05 09:38:52 by yshi             ###   ########.fr       */
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
		if (base[i] == '+' || base[i] == '-' ||
			(base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
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
// #include <stdio.h>
// int	main(void)
// {
// 	char *base10 = "0123456789";
// 	char *base2 = "01";
// 	char *base8	= "poneyvif";
// 	char *base16 = "0123456789ABCDEF";
// 	char *base_0 = "";
// 	char *base_1 = "12343\n5";
// 	char *base_2 = "23+45";
//  
// 	char *str10 = "   +----356 21";
// 	char *str2 = "  \t011111112353"; //127
// 	char *str16 = " ---22uooo"; //34
//
// 	printf("base10 test:%s\t|%d\n", str10, ft_atoi_base(str10, base10));
// 	printf("base2 test:%s\t|%d\n", str2, ft_atoi_base(str2, base2));
//    	printf("base16 test:%s\t\t|%d\n", str16, ft_atoi_base(str16, base16));
// 	printf("base invaild test:%s\t|%d\n", str10, ft_atoi_base(str2, base_0));
// 	printf("base invaild test:%s\t|%d\n", str10, ft_atoi_base(str2, base_1));
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	//char testnum[] = " +123";

	//int testint = ft_atoi_base(testnum, "0123456789");
	//printf("|%d|", testint);
	char	num1[] = "-123";
	char	num2[] = "+123";
	char	num3[] = "	 123";
	char	num4[] = " +123ddd456";
	char	num5[] = "\t\t2147483647";
	char 	num6[] = " -2147483648";
	char	num7[] = "123456789123456789";
	char	num8[] = "-----123";
	char	num9[] = "0";

	char	binum1[] = "0";
	char	binum2[] = "01";
	char	binum3[] = "10";
	char	binum4[] = "11";
	char	binum5[] = "100";
	char	binum6[] = "101";
	char	binum7[] = "110";


	char	base10[] = "0123456789";
	char	base16[] = "0123456789abcdef";
//	char	base2[] = "01";
	char	base8[] = "01234567";
	//char	base2bis[] = "!\\";

	int a = atoi(num1);
	int b = atoi(num2);
	int c = atoi(num3);
	int d = atoi(num4);
	int e = atoi(num5);
	int f = atoi(num6);
	int g = atoi(num7);
	int h = atoi(num8);
	int i = atoi(num9);
	int z = ft_atoi_base(num1, base10);
	int y = ft_atoi_base(num2, base10);
	int x = ft_atoi_base(num3, base10);
	int w = ft_atoi_base(num4, base10);
	int v = ft_atoi_base(num5, base10);
	int u = ft_atoi_base(num6, base10);
	int t = ft_atoi_base(num7, base10);
	int s = ft_atoi_base(num8, base10);
	int r = ft_atoi_base(num9, base10);

	printf("|%d|%d|%d|%d|%d|%d|%d|%d|%d|\n", a,b,c,d,e,f,g,h,i);
	printf("|%d|%d|%d|%d|%d|%d|%d|%d|%d|\n", z,y,x,w,v,u,t,s,r);

	int q = ft_atoi_base(binum1, base8);
	int p = ft_atoi_base(binum2, base8);
	int o = ft_atoi_base(binum3, base8);
	int n = ft_atoi_base(binum4, base8);
	int m = ft_atoi_base(binum5, base16);
	int l = ft_atoi_base(binum6, base16);
	int k = ft_atoi_base(binum7, base16);
	printf("|%d|%d|%d|%d|%d|%d|%d|\n", q,p,o,n,m,l,k);

	char badbase1[] = "123456789abdecf+";
	char badbase2[] = "01\n23456789";
	char badbase3[] = "";
	char badbase4[] = "sneakyrepeat";
	char badbase5[] = "asdlkfj00";

	int try1 = ft_atoi_base(num1, badbase1);
	int try2 = ft_atoi_base(num2, badbase2);
	int try3 = ft_atoi_base(num3, badbase3);
	int try4 = ft_atoi_base(num4, badbase4);
	int try5 = ft_atoi_base(num5, badbase5);
	printf("Badbases : |%d|%d|%d|%d|%d|\n", try1, try2, try3, try4, try5);	
}
