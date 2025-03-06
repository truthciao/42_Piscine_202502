/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:10:27 by yshi              #+#    #+#             */
/*   Updated: 2025/03/04 17:50:19 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len ++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*orignal;

	orignal = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (orignal);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined_str;
	int		len;	
	int		i;
	int		j;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	joined_str = (char *)malloc(sizeof(char)
			* (len + (size - 1) * ft_strlen(sep)) + 1);
	if (joined_str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	joined_str[i] = '\0';
	while (i < size)
	{
		ft_strcat(joined_str, strs[i]);
		if (i != size - 1)
			ft_strcat(joined_str, sep);
		i ++;
	}
	return (joined_str);
}
//
//#include <stdio.h>
//int main(void)
//{
//	char *strs[3] = {"abc", "edf", "uks"};
//	char *sep = "===";
//
//	printf("%s\n", ft_strjoin(3, strs, sep));
//}
