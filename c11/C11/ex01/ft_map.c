/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:44:55 by yshi              #+#    #+#             */
/*   Updated: 2025/03/10 19:52:24 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	i;

	i = 0;
	res = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i ++;
	}
	return (res);
}
//
//#include <stdio.h>
//int add(int a)
//{
//	return a+1;
//}
//int main()
//{
//	int tab[] = {2, 4, 9};
//	int	*res;
//
//	res = ft_map(tab, 3, &add);
//	for(int i=0; i<3; i++)
//		printf("%d \n", res[i]);
//}
