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

char **ft_split(char const *s, char c)
{   
    size_t i;
    if (s == NULL)
        return (NULL);

    size_t len_s = ft_strlen (s);

    size_t count_delimiters = 0;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            count_delimiters++;
        i++;
    }

    size_t num_strings = count_delimiters + 1;

    char **result = (char **)malloc((num_strings + 1) *sizeof(char *));
    if (result == NULL)
        return NULL;
    
    const char *start = s;

    char *substring;

    size_t array_index = 0;

    i = 0;
    while(s[i] != '\0')
    {
        if (s[i] == c || s[i] == '\0')
        {
           size_t len_substring = &s[i] - start; 

           substring = (char *)malloc((len_substring + 1) *sizeof(char));
           if (substring == NULL)
           {
                size_t j = 0;
                while (j < array_index)
                    free(result[j]);
                j++;

                free(result);
                return (NULL);
           }

           ft_strlcpy(substring, start, len_substring);
           substring[len_substring] = '\0';

           result[array_index] = substring;
           array_index++;

           start = &s[i + 1];
        }
        i++;
    }
    result[array_index] = NULL;

    return (result);
}