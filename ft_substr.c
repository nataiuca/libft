/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:18:04 by natferna          #+#    #+#             */
/*   Updated: 2024/09/19 18:18:55 by natferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include <stdlib.h>

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

int main(void)
{
    char *s = "Hola, mundo!";
    unsigned int start = 7;
    size_t len = 5;
    char *result;

    // Llamar a ft_substr para obtener una subcadena de 's' desde el índice 'start' y longitud 'len'
    result = ft_substr(s, start, len);

    // Comprobar si la memoria se asignó correctamente
    if (result == NULL)
    {
        printf("Error al reservar memoria.\n");
        return (1);
    }

    // Imprimir la subcadena resultante
    printf("Subcadena resultante: '%s'\n", result);

    // Liberar la memoria asignada
    free(result);

    return (0);
}