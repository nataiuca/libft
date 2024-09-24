#include <stdlib.h>
#include <stdio.h>

char *ft_itoa(int n) {
    int len = (n <= 0) ? 1 : 0; // Longitud mínima (1 para '0' o '-' para negativos)
    int num = n;
    while (num) {
        len++;
        num /= 10;
    }
    if (n == 0) len = 1; // Si n es 0, la longitud es 1

    char *str = malloc(len + 1);
    if (!str) return NULL;

    str[len] = '\0'; // Termina la cadena
    if (n < 0) {
        str[0] = '-';
        n = -n;
    } else if (n == 0) {
        str[0] = '0';
    }
    
    while (n) {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
    return str;
}

int main() {
    int numbers[] = {123, -456, 0, 7890, -2147483648};
    for (int i = 0; i < 5; i++) {
        char *str = ft_itoa(numbers[i]);
        if (str) {
            printf("El entero %d como string: %s\n", numbers[i], str);
            free(str);  // Liberar la memoria asignada
        } else {
            printf("Error al convertir el número %d.\n", numbers[i]);
        }
    }
    return 0;
}
