#include <stddef.h>

size_t strlcpy(char *dst, const char *src, size_t size) {
    size_t src_len = 0;
    
    // Calculate the length of src
    while (src[src_len]) {
        src_len++;
    }

    // If size is not zero, copy up to size - 1 characters
    if (size) {
        size_t i = 0;
        while (i < size - 1 && src[i]) {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';  // NUL-terminate the result
    }
    
    return src_len;  // Return the total length of src
}
