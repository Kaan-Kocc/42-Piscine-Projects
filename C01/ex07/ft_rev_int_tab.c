/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 23:48:09 by kkoc              #+#    #+#             */
/*   Updated: 2026/06/28 01:52:12 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int temp;
	
	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int main()
{

	int a[5] = {1,2,3,4,5}; 
	ft_rev_int_tab(a,5);
	printf("%d %d", a[0], a[4]);
	return (0);
}
*/
