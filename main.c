#include <stdio.h>

int main() {
    printf("NIM: 231110062\n");
    printf("Name: Joko Supriyanto\n");

    int amount, index = 1;
    float number, sum = 0, average;

    printf("Please enter amount: ");
    scanf("%d", &amount);

    while(index <= amount) {
        printf("Please enter the number %d: ", index);
        scanf("%f", &number);

        sum += number;
        index++;
    }

    average = sum / amount;
    printf("The average of the numbers is %.2f", average);

    return 0;
}

