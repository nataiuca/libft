#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *result;
    int     i = 0, j = 0, len1 = 0, len2 = 0;

    // Calcular longitud de s1
    while (s1[len1])
        len1++;
    // Calcular longitud de s2
    while (s2[len2])
        len2++;

    // Reservar memoria para la nueva cadena (longitud de s1 + s2 + 1 para '\0')
    result = (char *)malloc(len1 + len2 + 1);
    if (!result)
        return (NULL);

    // Copiar s1 en la nueva cadena
    while (i < len1)
    {
        result[i] = s1[i];
        i++;
    }

    // Copiar s2 en la nueva cadena
    while (j < len2)
    {
        result[i + j] = s2[j];
        j++;
    }

    result[i + j] = '\0'; // Terminar la cadena con '\0'
    return (result);
}

int main(void)
{
    char *s1 = "Hola, ";
    char *s2 = "mundo!";
    char *result;

    // Llamar a ft_strjoin para concatenar s1 y s2
    result = ft_strjoin(s1, s2);

    // Comprobar si la memoria se asignó correctamente
    if (result == NULL)
    {
        printf("Error al reservar memoria.\n");
        return (1);
    }

    // Imprimir la cadena concatenada
    printf("Cadena concatenada: %s\n", result);

    // Liberar la memoria asignada
    free(result);

    return (0);
}
