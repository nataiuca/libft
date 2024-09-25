#include <stddef.h>

char *strnstr(const char *big, const char *little, size_t len) {
    size_t i = 0, j = 0;

    if (*little == '\0') {
        return (char *)big;  // If little is empty, return big
    }

    while (i < len && big[i]) {
        j = 0;
        while (i + j < len && big[i + j] && little[j] && big[i + j] == little[j]) {
            j++;
        }
        if (!little[j]) {
            return (char *)&big[i];  // Found match, return pointer to the first occurrence
        }
        i++;
    }

    return NULL;  // No match found, return NULL
}
