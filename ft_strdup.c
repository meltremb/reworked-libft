/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meltremb <meltremb@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:12:49 by meltremb          #+#    #+#             */
/*   Updated: 2022/04/05 13:35:36 by meltremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* I wish i understood anything of how malloc works. would really be useful.
 * Anyway that one seems to work somehow. make a string, allocate space equal
 * to that gibberish and fill it with the given string. also set it to zero
 * to make the moulinette happy. */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc((ft_strlen(s1) + 1) * (sizeof(char)));
	if (!ptr)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
