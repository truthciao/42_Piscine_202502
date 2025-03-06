/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:48:18 by yshi              #+#    #+#             */
/*   Updated: 2025/03/05 10:48:38 by yshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i ++;
	return (i);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base_len(base) == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= '\t' && base[i] <= '\r') || base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j ++;
		}	
		i ++;
	}
	return (1);
}

int	index_in_base(char ch, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (ch == base[index])
			return (index);
		index ++;
	}
	return (-1);
}

int	is_num(char ch, char *base)
{
	while (*base)
	{
		if (ch == *base)
			return (1);
		base ++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	if (!is_valid_base(base))
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (is_num(str[i], base))
	{
		num = num * base_len(base) + index_in_base(str[i], base);
		i ++;
	}
	return (num * sign);
}
