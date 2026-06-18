// question16
#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, digit, digits;
    int sum;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    for (num = start; num <= end; num++) {
        temp = num;
        digits = 0;
        sum = 0;

        // Count digits
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate sum of digits^digits
        while (temp > 0) {
            digit = temp % 10;
            sum += (int)pow(digit, digits);
            temp /= 10;
        }

        // Handle 0 as an Armstrong number
        if (num == 0)
            sum = 0;

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}