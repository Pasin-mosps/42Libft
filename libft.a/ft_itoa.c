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

char *ft_itoa(int n)
{
    int length = 0;
    int temp = n;

    while (temp != 0)
    {
        temp /= 10;
        length++;
    }

    int is_negative = 0;
    if (n < 0)
    {
        is_negative = 1;
        length++;
        n = -n;
    }

    char *result = (char *)malloc((length +1) *sizeof(char));
    if (result == NULL)
        return (NULL);

    result[length] = '\0';

    int i;
    i = length - 1;
    while (i >= 0)
    {
        result[i] = (n % 10) + '0';
        n /= 10;
    }
    i++;

    if (is_negative)
        result[0] = '0';
    return (result);
}
