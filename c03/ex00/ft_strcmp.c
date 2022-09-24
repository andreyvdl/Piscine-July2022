/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adantas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:07:20 by adantas-          #+#    #+#             */
/*   Updated: 2022/07/26 14:44:14 by adantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] != '\0' || s2[n] != '\0')
	{
		if (s1[n] < s2[n])
			return (s1[n] - s2[n]);
		else if (s1[n] > s2[n])
			return (s1[n] - s2[n]);
		n++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("meu: %d\n", ft_strcmp("", "");
	printf("original: %d\n", strcmp("", "");
}*/
