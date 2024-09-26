/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:18:12 by natferna          #+#    #+#             */
/*   Updated: 2024/09/26 14:42:06 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2) {
    int len1;
    int len2;
    char *result;
    int i;

    len1 = 0;
    len2 = 0;
    if (s1) {
        while (s1[len1])
            len1++;
    }
    if (s2) {
        while (s2[len2])
            len2++;
    }
    result = malloc(len1 + len2 + 1);
    if (result) {
        i = 0;
        while (i < len1) {
            result[i] = s1[i];
            i++;
        }
        while (i < len1 + len2) {
            result[i] = s2[i - len1];
            i++;
        }
        result[i] = '\0';
        return result;
    }
    return NULL;
}

