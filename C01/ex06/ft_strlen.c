/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 23:24:28 by kkoc              #+#    #+#             */
/*   Updated: 2026/06/28 01:51:40 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
/*
int	main(void)
{
	char	a[5] = {'1', '2', '3', '4', '\0'}; //output 4 olacak
	int	count;
	
	count = ft_strlen(a);
	printf("%d\n", count);
	
	return (0);
}
*/