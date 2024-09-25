#include <stddef.h>

void *memcpy(void *dest, const void *src, size_t n) {
    char *d; 
    char *s; 
    
	d = (char *)dest;
	s = (char *)src;
    while (n--) {
        *d++ = *s++;
    }
    
    return dest;
}