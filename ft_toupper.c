#include <unistd.h>

int ft_toupper(int c) {
    // Check if c is a lowercase letter (ASCII range 'a' to 'z')
    if (c >= 'a' && c <= 'z') {
        c -= 32;  // Convert to uppercase by adjusting the ASCII value
    }
    
    return c;  // Return the converted or unchanged character
}
