//question83
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {

        char ch = str[i];

        // Convert uppercase to lowercase (optional handling)
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check vowels
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check consonants
        else if(ch >= 'a' && ch <= 'z') {
            consonants++;
        }

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}