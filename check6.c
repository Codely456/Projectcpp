#include <stdio.h>

int main() {
    int age;
    
    // Taking user input for age
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // Checking voting eligibility
    if (age >= 18) {
        printf("You are eligible to vote!\n");
        printf("Make sure to participate in the elections.\n");
    } else {
        int years_left = 18 - age;  // Calculate years left
        printf("Sorry, you are not eligible to vote.\n");
        printf("You can vote after %d years.\n", years_left);
    }
    
    return 0;
}

