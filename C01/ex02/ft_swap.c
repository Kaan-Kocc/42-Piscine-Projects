/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 22:34:11 by kkoc              #+#    #+#             */
/*   Updated: 2026/06/28 02:02:22 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 5;
	b = 10;
	
	printf("Değişim Öncesi: a = %d, b = %d\n", a, b);
	
	ft_swap(&a, &b);
	
	printf("Değişim Sonrasi: a = %d, b = %d\n", a, b);
	
	return (0);
}
*/
