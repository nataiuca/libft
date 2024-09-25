#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n) {
    char *d; 
    char *s; 

	d = (char *)dest;
	s = (char *)src;

    if (d < s) {
        while (n--) {
            *d++ = *s++;
        }
    } else {
        d += n;
        s += n;
        while (n--) {
            *--d = *--s;
        }
    }

    return dest;
}
