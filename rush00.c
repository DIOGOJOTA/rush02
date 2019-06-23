/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fegon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 19:09:14 by fegon             #+#    #+#             */
/*   Updated: 2019/06/23 17:30:24 by fkatelyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

str		*rush(int x, int y)
{
	int i;
	int j;
	int a;
	char *str;

	str = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	i = 0;
	a = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1))
				str[a++] = 'o';
			else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0))
				str[a++] = 'o';
			else if (j == 0 || j == x - 1)
				str[a++] = '|';
			else if (i == 0 || i == y - 1)
				str[a++] = '-';
			else
				str[a++] = ' ';
			j++;
		}
		str[a++] = '\n';
		i++;
	}
	str[a] = '\0';
	ft_putstr(str);
	return (str);
}

