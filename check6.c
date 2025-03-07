#include <stdio.h>

int main() {
    int age;
    char choice;

    do {
        // Taking user input for age
        printf("Enter your age: ");
        
        // Validate input to ensure it's an integer
        if (scanf("%d", &age) != 1) {
            printf("Invalid input! Please enter a valid integer age.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue; // Restart loop
        }

        // Validating age input
        if (age < 0) {
            printf("Invalid age! Please enter a valid age.\n");
        }
        else if (age >= 18) {
            printf("You are eligible to vote!\n");
            printf("Make sure to participate in the elections.\n");
        } else {
            int years_left = 18 - age;  // Calculate years left
            printf("Sorry, you are not eligible to vote.\n");
            printf("You can vote after %d years.\n", years_left);
        }

        // Ask if the user wants to check again
        printf("Do you want to check another age? (y/n): ");
        while (getchar() != '\n'); // Clear input buffer before taking choice
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');

    // Thank you message
    printf("Thank you for using the voting eligibility checker!\n");
    
    return 0;
}

