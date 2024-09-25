#include <unistd.h>

char *strrchr(const char *s, int c) {
    const char *last = NULL;

    while (*s) {
        if (*s == (char)c) {
            last = s;  // Update last to the current matching character
        }
        s++;  // Move to the next character
    }

    // Check if c is the null terminator '\0'
    if (c == '\0') {
        return (char *)s;  // Return pointer to the null terminator
    }

    return (char *)last;  // Return the last occurrence or NULL if not found
}
