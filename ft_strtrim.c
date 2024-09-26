/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:57:11 by natferna          #+#    #+#             */
/*   Updated: 2024/09/26 14:57:13 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_in_set(char c, char const *set)
{
    int i = 0;
    while (set[i])
    {
        if (c == set[i])
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start = 0, end, i = 0;
    char *trimmed;

    // Encontrar el índice inicial (start) donde los caracteres ya no están en set
    while (s1[start] && is_in_set(s1[start], set))
        start++;
    
    // Encontrar el índice final (end) donde los caracteres ya no están en set
    end = start;
    while (s1[end])
        end++;
    while (end > start && is_in_set(s1[end - 1], set))
        end--;

    // Reservar memoria para la nueva cadena recortada
    trimmed = (char *)malloc(end - start + 1);
    if (!trimmed)
        return (NULL);

    // Copiar la parte recortada de s1 en la nueva cadena
    while (start < end)
        trimmed[i++] = s1[start++];

    trimmed[i] = '\0'; // Terminar la cadena con '\0'
    return (trimmed);
}
