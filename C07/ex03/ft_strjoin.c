/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strjoin.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/16 20:37:20 by username         #+#    #+#              */
/*   Updated: 2026/07/16 20:46:27 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len_strs(char **strs, int size)
{
	int	i;
	int	j;
	int	leng;

	i = 0;
	leng = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			leng++;
		}
		i++;
	}
	return (leng);
}

int	ft_len_sep(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		i++;
	}
	return (i);
}

void	ft_array_write(char **strs, char *sep, char *dest, int size)
{
	int	i;
	int	j;
	int	m;

	i = 0;
	j = 0;
	while (i < size)
	{
		m = 0;
		while (strs[i][m])
		{
			dest[j] = strs[i][m];
			j++;
			m++;
		}
		m = 0;
		while (m < ft_len_sep(sep) && i < size - 1)
		{
			dest[j] = sep[m];
			j++;
			m++;
		}
		i++;
	}
	dest[j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		total_length;

	if (size == 0)
	{
		dest = malloc(sizeof(char) * 1);
		if (!dest)
			return (NULL);
	}
	total_length = ft_len_strs(strs, size) + ft_len_sep(sep) * (size - 1);
	dest = malloc(sizeof(char) * (total_length + 1));
	if (!dest)
		return (NULL);
	ft_array_write(strs, sep, dest, size);
	return (dest);
}
