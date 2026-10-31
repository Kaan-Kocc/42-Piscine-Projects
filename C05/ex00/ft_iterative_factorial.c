/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoc <kkoc@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 11:42:02 by kkoc              #+#    #+#             */
/*   Updated: 2026/07/12 12:25:00 by kkoc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	temp;

	i = 1;
	temp = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while ((temp - i) != 0)
	{
		nb = nb * (temp - i);
		i++;
	}
	return (nb);
}
