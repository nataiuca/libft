/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:34:20 by natferna          #+#    #+#             */
/*   Updated: 2024/09/26 13:13:41 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(char *str) 
{
    int sign = 1;
    int result = 0;

      while (*str == ' ' || (*str >= '\t' && *str <= '\r')) {
        str++;
    }

    while (*str == '+' || *str == '-') {
        if (*str == '-')
            sign *= -1;
        str++;
    }

    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result * sign;
}
