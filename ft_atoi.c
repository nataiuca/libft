#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str) {
    int sign = 1;
    int result = 0;

    // Saltar espacios iniciales
    while (*str == ' ' || (*str >= '\t' && *str <= '\r')) {
        str++;
    }

    // Manejar signos
    while (*str == '+' || *str == '-') {
        if (*str == '-')
            sign *= -1;
        str++;
    }

    // Convertir dígitos
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result * sign;
}
