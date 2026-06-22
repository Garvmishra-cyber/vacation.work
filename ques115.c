//question115
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice, i;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find String Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Convert to Lowercase\n");
        printf("5. Count Vowels\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length of string = %lu\n", strlen(str) - 1);
                break;

            case 2:
                printf("Reversed String: ");
                for(i = strlen(str) - 2; i >= 0; i--) {
                    printf("%c", str[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Uppercase String: ");
                for(i = 0; str[i] != '\0'; i++) {
                    ch = str[i];
                    if(ch >= 'a' && ch <= 'z')
                        ch = ch - 32;
                    printf("%c", ch);
                }
                printf("\n");
                break;

            case 4:
                printf("Lowercase String: ");
                for(i = 0; str[i] != '\0'; i++) {
                    ch = str[i];
                    if(ch >= 'A' && ch <= 'Z')
                        ch = ch + 32;
                    printf("%c", ch);
                }
                printf("\n");
                break;

            case 5: {
                int count = 0;
                for(i = 0; str[i] != '\0'; i++) {
                    ch = str[i];
                    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                        count++;
                }
                printf("Number of vowels = %d\n", count);
                break;
            }

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}