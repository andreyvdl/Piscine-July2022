/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:02:25 by adantas-          #+#    #+#             */
/*   Updated: 2022/07/26 17:37:48 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (!((str[n] >= 'a' && str[n] <= 'z')
				|| (str[n] >= 'A' && str[n] <= 'Z')))
			return (0);
		n++;
	}
	return (1);
}
