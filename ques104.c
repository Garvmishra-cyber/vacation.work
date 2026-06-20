//question104
#include <stdio.h>

int main() {
    int score = 0, answer;

    printf("===== QUIZ APPLICATION =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1) Mumbai\n2) Delhi\n3) Kolkata\n4) Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 2
    printf("\n2. Which language is used for system programming?\n");
    printf("1) C\n2) HTML\n3) CSS\n4) SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    // Question 3
    printf("\n3. How many days are there in a leap year?\n");
    printf("1) 365\n2) 366\n3) 364\n4) 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    // Question 4
    printf("\n4. Which planet is known as the Red Planet?\n");
    printf("1) Venus\n2) Earth\n3) Mars\n4) Jupiter\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    // Question 5
    printf("\n5. What is the value of 5 + 7?\n");
    printf("1) 10\n2) 11\n3) 12\n4) 13\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    printf("\n===== RESULT =====\n");
    printf("Your Score: %d/5\n", score);

    if (score == 5)
        printf("Excellent!\n");
    else if (score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}