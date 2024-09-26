/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:44:04 by natferna          #+#    #+#             */
/*   Updated: 2024/09/26 14:44:17 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
    if (!s || !f) return NULL;

    unsigned int i = 0;
    while (s[i])
        i++;

    char *new_str = malloc(i + 1);
    if (!new_str) return NULL;

    i = 0;
    while (s[i]) {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}
