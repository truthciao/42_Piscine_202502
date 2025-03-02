/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:54:40 by yshi              #+#    #+#             */
/*   Updated: 2025/03/01 18:15:08 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1)
			+ ft_fibonacci(index - 2));
}
//
//#include <stdio.h>
//int main(void)
//{
//	printf("%d\n", ft_fibonacci(17)); //1597
//}
