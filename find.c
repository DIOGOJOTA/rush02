/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkatelyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 16:45:03 by fkatelyn          #+#    #+#             */
/*   Updated: 2019/06/23 17:30:15 by fkatelyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	find(char *str, int *x)
{
	int a;
	int b;
	int cmp;

	a = x[0];
	b = x[1];
	cmp = 0;

	if (ft_strcmp(str, rush00(a, b))
			ft_putrush('0', a, b, cmp);
			cmp++;
	if (ft_strcmp(str, rush01(a, b))
			ft_putrush('1', a, b, cmp);
			cmp++;
	if (ft_strcmp(str, rush02(a, b))
			ft_putrush('2', a, b, cmp);
			cmp++;
	if (ft_strcmp(str, rush03(a, b))
			ft_putrush('3', a, b, cmp)
			cmp++;
	if (ft_strcmp(str, rush04(a, b))
			ft_putrush('4', a, b, cmp)
	else
		write (1, "aucune", 6);
	write (1, "\n", 1);
}
