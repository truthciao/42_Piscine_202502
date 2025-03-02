/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 14:15:23 by yshi              #+#    #+#             */
/*   Updated: 2025/03/01 17:41:33 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{	
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{	
			result = result * nb;
			i ++;
		}
	}
	return (result);
}
//
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d\n", ft_interative_power(0,0));
//}
