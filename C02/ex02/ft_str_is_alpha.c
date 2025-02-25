/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:16:31 by yshi              #+#    #+#             */
/*   Updated: 2025/02/22 17:18:40 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	non_alpha;
	int	i;

	non_alpha = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
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
//	result = ft_str_is_alpha("ZabB");
//	printf ("%d", result);
//}
