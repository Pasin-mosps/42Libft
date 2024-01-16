/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:21:31 by enennige          #+#    #+#             */
/*   Updated: 2018/03/01 08:41:56 by enennige         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = dst;
	src_ptr = src;
	if (!dst && !src)
		return (NULL);
	if (dst_ptr > src_ptr)
	{
		while (len--)
		{
			dst_ptr[len] = src_ptr[len];
		}
	}
	else
	{
		while (len--)
		{
			*dst_ptr++ = *src_ptr++;
		}
	}
	return (dst);
}
