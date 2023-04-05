/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:28:00 by meltremb          #+#    #+#             */
/*   Updated: 2023/04/05 14:54:16 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 * char--->int and the rules that look useless are for under min int and over
 * long max. You don't need them but i'm stupid. */

#include"libft.h"

long	ft_atoi(const char *str)
{
	long	nb;
	long	i;
	long	sign;

	sign = 1;
	i = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
			i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = sign * -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
		if (nb < 0)
			return (0);
		if ((sign * nb) > 2147483647)
			return (-1);
	}
	return (sign * nb);
}
