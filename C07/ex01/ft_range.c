/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_range.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/12 20:24:29 by username         #+#    #+#              */
/*   Updated: 2026/07/16 20:46:24 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	if (min >= max)
		return (NULL);
	i = 0;
	dest = malloc(sizeof(int) * (max - min));
	if (dest == NULL)
		return (NULL);
	while (i < max - min)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
