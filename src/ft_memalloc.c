/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbecke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 17:04:47 by ealbecke          #+#    #+#             */
/*   Updated: 2016/06/27 17:04:50 by ealbecke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	char	*str;
	size_t	i;

	i = -1;
	if (!size || !(ptr = malloc(size)))
		return (NULL);
	str = ptr;
	while (++i < size)
		str[i] = 0;
	return (ptr);
}
