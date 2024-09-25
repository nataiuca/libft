#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n) {
    const unsigned char *p = (const unsigned char *)s;
    unsigned char uc = (unsigned char)c;

    while (n--) {
        if (*p == uc) {
            return (void *)p;  // Return pointer to the matching byte
        }
        p++;  // Move to the next byte
    }

    return NULL;  // Return NULL if no match is found
}
