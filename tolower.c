#include <unistd.h>

int tolower(int c) {
    // Check if c is a lowercase letter (ASCII range 'A' to 'Z')
    if (c >= 'A' && c <= 'Z') {
        c += 32;  // Convert to uppercase by adjusting the ASCII value
    }
    
    return c;  // Return the converted or unchanged character
}
