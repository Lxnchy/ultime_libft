/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehubert <jehubert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:30:54 by jehubert          #+#    #+#             */
/*   Updated: 2022/12/06 15:50:45 by jehubert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				i;

	if (!dest || !src)
		return (dest);
	i = -1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (s < d)
		while (++i < n)
			d[n - i - 1] = s[n - i - 1];
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
