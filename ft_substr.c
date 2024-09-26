/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <natferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:18:04 by natferna          #+#    #+#             */
/*   Updated: 2024/09/26 14:57:59 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i = 0, s_len = 0;

    // Calcular la longitud de la cadena 's'
    while (s[s_len])
        s_len++;

    // Si 'start' está fuera de los límites de la cadena, devolver una cadena vacía
    if (start >= s_len)
        len = 0;

    // Ajustar 'len' si excede el tamaño disponible desde 'start'
    if (len > s_len - start)
        len = s_len - start;

    // Reservar memoria para la subcadena (len + 1 para '\0')
    substr = (char *)malloc(len + 1);
    if (!substr)
        return (NULL);

    // Copiar los caracteres de 's' a la subcadena
    while (i < len && s[start + i])
    {
        substr[i] = s[start + i];
        i++;
    }

    substr[i] = '\0'; // Añadir el terminador nulo
    return (substr);
}
