/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_ultimate_range.c                               :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/12 21:29:28 by username         #+#    #+#              */
/*   Updated: 2026/07/16 20:46:26 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	dest = malloc(sizeof(int) * (max - min));
	if (dest == NULL)
		return (-1);
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	*range = dest;
	return (i);
}
