/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:00:42 by yshi              #+#    #+#             */
/*   Updated: 2025/02/22 17:21:58 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	non_num;
	int	i;

	non_num = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			non_num ++;
		i ++;
	}
	if (non_num >= 1)
		return (0);
	else
		return (1);
}
//
//#include <stdio.h>
//int main(void)
//{
//	int result;
//	result = ft_str_is_numeric("34ab5c6");
//	printf ("%d", result);
//}
