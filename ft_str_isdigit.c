/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:59:59 by meltremb          #+#    #+#             */
/*   Updated: 2023/04/05 15:54:48 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_str_isdigit(char *str)
{
	while (*str)
	{
		if (*str == '-')
			str++;
		if (*str >= '0' && *str <= '9')
			str++;
		else
			return (0);
	}
	return (1);
}
