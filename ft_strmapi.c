#include <stdlib.h>
#include <stdio.h>


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

char example_func(unsigned int i, char c) {
    if (i % 2 == 0 && c >= 'a' && c <= 'z')
        return c - 32; // Convertir a mayúsculas
    return c;
}

int main() {
    char *str = "hola mundo";
    char *result = ft_strmapi(str, example_func);

    if (result) {
        printf("Resultado: %s\n", result);
        free(result); // Liberar la memoria asignada
    } else {
        printf("Error al aplicar la función.\n");
    }

    return 0;
}