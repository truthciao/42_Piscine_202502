/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:49:59 by yshi              #+#    #+#             */
/*   Updated: 2025/02/22 17:50:51 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	non_alpha;
	int	i;

	non_alpha = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			non_alpha ++;
		i ++;
	}
	if (non_alpha >= 1)
		return (0);
	else
		return (1);
}
//
//#include <stdio.h>
//int main(void)
//{
//	int result;
//	result = ft_str_is_uppercase("Xab");
//	printf ("%d", result);
//}
