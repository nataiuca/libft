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


size_t ft_strlen(const char *s)
{
    size_t len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

// Función ft_substr
char *ft_substr(const char *s, unsigned int start, size_t len)
{
    char *substr;
    size_t s_len = ft_strlen(s);

    // Comprobar si start es mayor que la longitud de s
    if (start >= s_len)
        return NULL; // Comportamiento indefinido

    // Ajustar len si excede los caracteres restantes en s
    if (len > s_len - start)
        len = s_len - start;

    // Reservar memoria para la subcadena + 1 para el carácter nulo
    substr = (char *)malloc((len + 1) * sizeof(char));
    if (!substr)
        return NULL; // Retornar NULL si falla la asignación

    // Copiar la subcadena
    for (size_t i = 0; i < len; i++)
        substr[i] = s[start + i];

    // Añadir el carácter nulo al final
    substr[len] = '\0';

    return substr;
}

int main(void)
{
    char *s = "Hola, mundo!";
    char *sub;

    // Caso 1: Substring desde el índice 7, longitud 5 ("mundo")
    sub = ft_substr(s, 7, 5);
    if (sub)
    {
        printf("Subcadena 1: %s\n", sub); // Debe imprimir "mundo"
        free(sub);
    }

    // Caso 2: Substring desde el índice 0, longitud 4 ("Hola")
    sub = ft_substr(s, 0, 4);
    if (sub)
    {
        printf("Subcadena 2: %s\n", sub); // Debe imprimir "Hola"
        free(sub);
    }

    // Caso 3: Substring desde el índice 20 (comportamiento indefinido)
    sub = ft_substr(s, 20, 5);
    if (sub)
    {
        printf("Subcadena 3: '%s'\n", sub); // No debería imprimirse
        free(sub);
    }

    // Caso 4: Substring desde el índice 7, longitud 100
    sub = ft_substr(s, 7, 100);
    if (sub)
    {
        printf("Subcadena 4: %s\n", sub); // Debe imprimir "mundo!"
        free(sub);
    }

    return 0;
}
