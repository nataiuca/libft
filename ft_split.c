#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int count_words(const char *s, char c) {
    int count = 0;
    while (*s) {
        while (*s == c) s++;
        if (*s) {
            count++;
            while (*s && *s != c) s++;
        }
    }
    return count;
}

static char *get_next_word(const char **s, char c) {
    const char *start = *s;
    while (**s && **s == c) (*s)++;
    start = *s;
    while (**s && **s != c) (*s)++;
    return strndup(start, *s - start);
}

char **ft_split(char const *s, char c) {
    if (!s) return NULL;
    int word_count = count_words(s, c);
    char **result = malloc((word_count + 1) * sizeof(char *));
    if (!result) return NULL;

    int i = 0;
    while (*s) {
        char *word = get_next_word(&s, c);
        if (word) {
            result[i++] = word;
        }
    }
    result[i] = NULL;
    return result;
}

int main() {
    char *str = "Hola mundo, esto es un test";
    char delimiter = ' ';
    char **result = ft_split(str, delimiter);

    if (result) {
        int i = 0;
        while (result[i] != NULL) {
            printf("Palabra %d: %s\n", i + 1, result[i]);
            free(result[i]);  // Liberar cada string
            i++;
        }
        free(result);  // Liberar el array de punteros
    } else {
        printf("Error al dividir la cadena.\n");
    }

    return 0;
}

// Función para liberar el array de strings
void free_split(char **split) {
    int i = 0;
    while (split[i] != NULL) {
        free(split[i]);
        i++;
    }
    free(split);
}
