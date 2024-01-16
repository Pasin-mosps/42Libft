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
	size_t	i;
	size_t	result_index;
	char	*result;

	i = 0;
	result = 0;
	result_index = 0;
	len_s1 = ft_strlen(s1);
	result = (char *)malloc(len_s1 + 1);
	if (!result)
		return (NULL);
	while (i < len_s1)
	{
		if (ft_strchr(set, s1[i]) == NULL)
		{
			result[result_index] = s1[i];
			result++;
		}
		i++;
	}
	result[result_index] = '\0';
	return (ft_strdup(result));
}
