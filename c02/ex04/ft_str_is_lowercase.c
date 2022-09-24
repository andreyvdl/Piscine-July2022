/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:26:30 by adantas-          #+#    #+#             */
/*   Updated: 2022/07/26 17:39:32 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (!(str[n] >= 'a' && str[n] <= 'z'))
			return (0);
		n++;
	}
	return (1);
}