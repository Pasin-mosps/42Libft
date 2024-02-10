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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t len_s1;
	size_t len_s2;

	if (s1 == NULL || s2 == NULL )
		return (NULL);
	
	size_t len_s1 = ft_strlen(s1);
	size_t len_s2 = ft_strlen(s2);

	char *result = (char *)malloc(len_s1 + len_s2 + 1);

	if (result == NULL)
		return (NULL);

	ft_strcpy(result, s1);
	ft_strcpy(result + len_s1, s2);

	return (result);
}
