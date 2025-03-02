/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:50:42 by yshi              #+#    #+#             */
/*   Updated: 2025/03/01 17:51:15 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power -1));
	else
		return (0);
}
//
//#include <stdio.h>
//int	main(void)
//{
//	printf("%d", ft_recursive_power(2,5));
//}
