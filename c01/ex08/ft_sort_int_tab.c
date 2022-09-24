/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 08:38:16 by adantas-          #+#    #+#             */
/*   Updated: 2022/07/19 14:29:59 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	h;
	int	n;

	n = 0;
	while (size != 0)
	{
		if (tab[n] > tab[size - 1])
		{
			h = tab[size - 1];
			tab[size - 1] = tab[n];
				tab[n] = h;
		}
		n++;
		if (size != 0 && n == size)
		{
			n = 0;
			size--;
		}
	}
}
