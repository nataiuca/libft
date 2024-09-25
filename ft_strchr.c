#include <unistd.h>

char *ft_strchr(const char *s, int c) {
    while (*s) {
        if (*s == (char)c) {
            return (char *)s;  // Return pointer to the first occurrence
        }
        s++;  // Move to the next character
    }

    // Check if c is the null terminator '\0'
    if (c == '\0') {
        return (char *)s;  // Return pointer to the null terminator
    }

    return NULL;  // Return NULL if the character was not found
}
