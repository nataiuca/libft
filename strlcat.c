#include <stddef.h>

size_t strlcat(char *dst, const char *src, size_t size) {
    size_t dst_len = 0;
    size_t src_len = 0;
    
    // Find the length of dst
    while (dst[dst_len] && dst_len < size) {
        dst_len++;
    }

    // Find the length of src
    while (src[src_len]) {
        src_len++;
    }

    // Check if there's space to append
    if (dst_len < size - 1) {
        size_t i = 0;
        while (i < size - dst_len - 1 && src[i]) {
            dst[dst_len + i] = src[i];
            i++;
        }
        dst[dst_len + i] = '\0';  // NUL-terminate
    }

    return dst_len + src_len;  // Return total length
}
