/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fegon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:54:38 by fegon             #+#    #+#             */
/*   Updated: 2019/06/23 17:19:23 by fkatelyn         ###   ########.fr       */
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

void	rush(int x, int y)
{
	int	i;
	int j;
	int a;
	char *str;

	a = 0;
	str = (char *)malloc(sizeof(char) * (y * (x + 1) + 1));
	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 && j == 1) || (i == y && j == x))
				str[a++] = 'A';
			else if ((i == 1 && j == x) || (i == y && j == 1))
				str[a++] = 'C';
			else if (i == 1 || i == y || j == 1 || j == x)
				str[a++] = 'B';
			else
				str[a++] = ' ';
			j++;
		}
		str[a++] = '\n';
		i++;
	}
	str[a] = '\0';
	ft_putstr(str);
}
