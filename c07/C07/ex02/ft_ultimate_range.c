/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:48:52 by yshi              #+#    #+#             */
/*   Updated: 2025/03/04 12:08:26 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	i = 0;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i ++;
	}
	return (size);
}
//
//#include <stdio.h>
//int	main(int argc, char **argv)
//{
//	(void)argc;
//	printf("test1\n");
//	int **range = (int **)malloc(sizeof(int *)
//			* abs((atoi(argv[2]) -atoi(argv[1]))));
//	printf("test2\n");
//	ft_ultimate_range(range, atoi(argv[1]), atoi(argv[2]));
//		printf("test3\n");
//	for (int i = 0; i < atoi(argv[2]) - atoi(argv[1]); i++) 
//		printf("%d\t", (*range)[i]);
//}
