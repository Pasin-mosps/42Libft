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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	len_set;
	const char *start;
	const char *end;

	if (s1 == NULL || set == NULL)
		return NULL;

	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);

	start = s1;
	while(*start != '\0' && ft_strchr(set, *start) != NULL)
		start++;
	end = s1 + len_s1 - 1;
	while (end >start && ft_strchr(set, *end) != NULL)
		end--;

	size_t len_trimmed = end - start +1;

	char *result = (char *)malloc(len_trimmed +1);
	if (result == NULL)
		return (NULL);
	ft_strncmp (result, start, len_trimmed);

	result[len_trimmed] = '\0';

	return (result);
}
