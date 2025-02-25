#include<stdio.h>

int main() {
    int age;

    // Taking user input for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Checking voting eligibility
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}

