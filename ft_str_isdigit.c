/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:59:59 by meltremb          #+#    #+#             */
/*   Updated: 2023/05/08 13:32:19 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_str_isdigit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i > 0 && !(str[i] >= '0' && str[i] <= '9'))
			return (0);
		else if ((str[i] >= '0' && str[i] <= '9')
			|| (str[0] == '-' && (str[1] >= '0' && str[1] <= '9')))
			i++;
		else
			return (0);
	}
	return (1);
}
