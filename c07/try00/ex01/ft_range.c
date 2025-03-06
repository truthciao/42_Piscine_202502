/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:11:34 by yshi              #+#    #+#             */
/*   Updated: 2025/03/04 16:40:31 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;	
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		range = NULL;
		return (range);
	}	
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i ++;
	}
	return (range);
}
//
//#include <stdio.h>
//int	main(int argc, char **argv)
//{
//	(void)argc;
//	int *range;
//	range = ft_range(atoi(argv[1]), atoi(argv[2]));
//	for (int i = 0; i < atoi(argv[2]) - atoi(argv[1]); i++) 
//		printf("%d\t", range[i]);
//}
