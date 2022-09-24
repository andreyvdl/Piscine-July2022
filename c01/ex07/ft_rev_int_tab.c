/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:54:46 by adantas-          #+#    #+#             */
/*   Updated: 2022/07/18 15:50:00 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int		n;
	int		h;

	n = 0;
	while (n != size / 2)
	{
		h = tab[n];
		tab[n] = tab[size - n - 1];
		tab[size - n - 1] = h;
		n++;
	}
}
