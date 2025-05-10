#include <stdio.h>
int main() {   
    int number;
   
    printf("Enter an integer: ");  
    
    // reads and stores input
    scanf("%d", &number);

    // displays output
    printf("You entered: %d", number);
    
    return 0;
}
// This program prompts the user to enter an integer and then prints that integer to the console. It uses the `scanf` function to read the input and the `printf` function to display the output.
// The `%d` format specifier is used for integers in both `scanf` and `printf`.q