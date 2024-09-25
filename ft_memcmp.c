#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n) {
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    while (n--) {
        if (*p1 != *p2) {
            return *p1 - *p2;  // Return the difference between the first differing bytes
        }
        p1++;  // Move to the next byte in s1
        p2++;  // Move to the next byte in s2
    }

    return 0;  // Return 0 if all n bytes are equal
}
