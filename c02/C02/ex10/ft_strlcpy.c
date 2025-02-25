/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:17:16 by yshi              #+#    #+#             */
/*   Updated: 2025/02/24 13:14:19 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len ++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	else
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i ++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

//#include <stdio.h>
//#include <unistd.h>
//#include <bsd/string.h>
//#include <stdlib.h>
//int	main(int argc, char **argv)
//{
//	char	des0[50];
//	char	des1[50];
//	long	size;
//	
//	size = atoi(argv[2]);
//
//	printf("%s%s", argv[1],"\n");	
//	ft_strlcpy(des0, argv[1], size);
//	printf("%s", "My output: \n"); 
//	for (int i = 0; i < 20; i++)
//		write(1, &des0[i], 1);
//	printf("\n");
//
//	printf("Strlcpy output:\n");
//	strlcpy(des1, argv[1], size);
//	for (int i = 0; i < 20; i++)
//		write(1, des1 + i, 1);
////	fflush(stdout);
//	write(1, "\n", 1);	
//
////	printf("|%s|%s|", des1, des0);
////	printf("Des1 content: \"%s\"\n", des1);
////	for (int i = 0; i < 20; i++)
////    	printf("des1[%d]: '%c' (0x%x)\n", i, des1[i], des1[i]);
////
////	write(1, des1, strlen(des1));
//	return (argc);	
//}
