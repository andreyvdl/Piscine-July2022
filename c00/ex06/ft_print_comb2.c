/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:54:39 by adantas-          #+#    #+#             */
/*   Updated: 2022/07/13 11:18:00 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_number_math(int n);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_number_math(i);
			write(1, " ", 1);
			ft_number_math(j);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

void	ft_number_math(int n)
{
	char	n2;

	n2 = n / 10 + '0';
	write(1, &n2, 1);
	n2 = n % 10 + '0';
	write(1, &n2, 1);
}
