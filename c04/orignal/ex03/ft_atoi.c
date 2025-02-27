/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:42:51 by yshi              #+#    #+#             */
/*   Updated: 2025/02/26 16:07:16 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_num(char ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}

int	is_space(char ch)
{
	if ((ch >= '\t' && ch <= '\r') || ch == ' ')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while (is_space(str[i]))
		i ++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (is_num(str[i]))
	{
		num = num * 10 + (str[i] - '0');
		i ++;
	}
	return (num * sign);
}
//
//#include <stdlib.h>
//#include <stdio.h>
//int	main(void)
//{
//	char str[] = "  ---+--+24-127";
//
//	printf("my output:\t%d\n", ft_atoi(str));
//	printf("atoi output: \t%d\n", atoi(str));
//}
