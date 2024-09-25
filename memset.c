#include <unistd.h>

void *memset(void *s, int c, size_t n) {
    char *ptr = s; // Cast s to an unsigned char pointer
    size_t count = 0;       // Initialize a counter

    while (count < n) {     // Loop until we fill n bytes
        ptr[count] = c; // Set the byte
        count++;            // Increment the counter
    }

    return s;              // Return the original pointer
}
