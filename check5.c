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
        printf("Sorry, you are not eligible to vote.\n");
        printf("You can vote once you turn 18.\n");
    }
    
    return 0;
}


