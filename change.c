#include <stdio.h>

int main() {
    int cents, quarters, dimes, nickels, pennies;
    char choice;
    
    do {
        printf("Enter the amount in cents as a whole number: ");
        scanf("%d", &cents);
        
        if (cents < 0) {
            printf("Invalid input. Please enter a non-negative amount.\n");
            continue;
        }
        
        quarters = cents / 25;
        cents %= 25;
        
        dimes = cents / 10;
        cents %= 10;
        
        nickels = cents / 5;
        cents %= 5;
        
        pennies = cents;
        
        printf("Quarters: %d\n", quarters);
        printf("Dimes: %d\n", dimes);
        printf("Nickels: %d\n", nickels);
        printf("Pennies: %d\n", pennies);
        
        printf("Do you want to repeat the program? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}