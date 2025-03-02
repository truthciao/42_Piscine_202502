/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:54:35 by yshi              #+#    #+#             */
/*   Updated: 2025/02/28 14:14:30 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb == 1)
		return (nb);
	else if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}
//
//#include <stdio.h>
//int	main()
//{
//	printf("%d", ft_recursive_factorial(6));
//}
