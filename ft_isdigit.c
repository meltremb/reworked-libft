/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:51:33 by meltremb          #+#    #+#             */
/*   Updated: 2022/04/05 11:00:25 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Literally the same thing as the last one but if it's a number, why are you
 * even reading this? */

#include"libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	else
		return (0);
}
