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

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i++] = (unsigned char)c;
	}
	return (b);
}

// int main()
// {
// 	char a[] = "abcde";
// 	char b = '4';

// 	ft_memset(a, b, 5);
// 	for (int i = 0; i < 5; i++) {
// 		printf("%c", a[i]);
// 	}

// 	return 0;
// }