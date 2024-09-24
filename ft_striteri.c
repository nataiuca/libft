#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*)) {
    unsigned int i = 0;

    if (!s || !f)
        return;

    while (s[i]) {
        f(i, &s[i]);
        i++;
    }
}

void my_function(unsigned int i, char *c) {
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z') {
        *c -= 32; // Convertir a mayúscula
    }
}

int main() {
    char str[] = "hola mundo";  // Cadena de prueba

    ft_striteri(str, my_function);  // Aplicar la función my_function a cada carácter de str

    printf("Cadena modificada: %s\n", str);  // Imprimir la cadena modificada

    return 0;
}
