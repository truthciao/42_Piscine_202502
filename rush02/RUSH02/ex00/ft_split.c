/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suwildes <suwildes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:14:18 by suwildes          #+#    #+#             */
/*   Updated: 2025/03/08 19:01:14 by suwildes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is(char c, char *charset);

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	c;

	i = 1;
	c = 0;
	if (is(str[0], charset) == 1)
		c = 1;
	while (str[i])
	{
		if (is(str[i - 1], charset) == 1
			&& is(str[i], charset) == 0)
			c++;
		i++;
	}
	return (c);
}

int	ft_charcount(char *str, char *charset)
{
	int	i;

	i = 0;
	while (is(str[i], charset) == 0)
		i++;
	return (i);
}

int	is(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strcpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**strs;

	strs = malloc(sizeof (char *) * ft_wordcount(str, charset) + 1);
	if (strs == (NULL))
		return (NULL);
	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] && ((i == 0 && is(str[i], charset) == 0)
				|| (is(str[i], charset) == 0 && is(str[i - 1], charset) == 1)))
		{
			strs[j] = malloc(sizeof (char )
					* (ft_charcount(&str[i], charset) + 1));
			if (strs[j] == (NULL))
				return (NULL);
			ft_strcpy(strs[j], &str[i], ft_charcount(&str[i], charset));
			j++;
		}
	}
	strs[j] = malloc(sizeof (char));
	strs[j][0] = 0;
	return (strs);
}
