/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fegon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 18:00:06 by fegon             #+#    #+#             */
/*   Updated: 2019/06/23 17:28:01 by fkatelyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
			if (i == 1 && j == 1)
				str[a++] = '/';
			else if ((i == 1 && j == x) || (i == y && j == 1))
				str[a++] = '\\';
			else if (i == y && j == x)
				str[a++] = '/';
			else if (i == 1 || i == y || j == 1 || j == x)
				str[a++] = '*';
			else
				str[a++] = ' ';
			j++;
		}
		str[a++] = '\n';
		i++;
	}
	str[a] = '\0';
	return (str);
}
