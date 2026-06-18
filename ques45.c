//question45
#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reverse = 0, digit;

    while (n > 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    return (original == reverse);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}