/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 22:39:37 by kkoc              #+#    #+#             */
/*   Updated: 2026/06/28 02:00:08 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	
	a = 10;
	b = 3;
	
	ft_div_mod(a, b, &div, &mod);
	
	printf("Division: %d\n", div);
	printf("Remainder: %d\n", mod);
	
	return (0);
}

*/