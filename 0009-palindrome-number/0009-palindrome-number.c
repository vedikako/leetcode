#include <stdbool.h>
#include <limits.h>  // For INT_MAX and INT_MIN

bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) {
        return false;
    }

    int original = x;
    int reversed = 0;

    while (x > 0) {
        int digit = x % 10;
        
        // Check for overflow before multiplying by 10
        if (reversed > (INT_MAX - digit) / 10) {
            return false;  // If overflow would occur, return false
        }

        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    return (reversed == original);
}
