/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:46:11 by yshi              #+#    #+#             */
/*   Updated: 2025/02/28 13:48:23 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	if (nb < 0)
		return (0);
	factorial = 1;
	i = 1;
	while (i <= nb)
	{
		factorial = factorial * i;
		i ++;
	}
	return (factorial);
}
//
//#include <stdio.h>
//int	main()
//{
//	printf("%d", ft_iterative_factorial(6));
//}
