/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 22:48:11 by kkoc              #+#    #+#             */
/*   Updated: 2026/06/28 01:56:44 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_result;
	int	remainder;

	if (b != 0)
	{
		div_result = *a / *b;
		remainder = *a % *b;
		*a = div_result;
		*b = remainder;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 3;
	
	ft_ultimate_div_mod(&a, &b);
	
	printf("Division: %d\n", a);
	printf("Remainder: %d\n", b);
	
	return (0);
}
*/
