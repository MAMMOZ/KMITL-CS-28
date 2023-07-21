#include <stdio.h>

int main() {
    int sum = 0, amount = 0;

    while (1) {
        int input;
        printf("Enter a number (enter 0 or negative number to stop): ");
        scanf("%d", &input);
        if (input <= 0) 
            break;
        
        sum += input;
        amount += 1;
    }

    if (amount > 0) {
        printf("Summation = %d Avg = %d\n", sum, sum / amount);
    } else {
        printf("No data entered.\n");
    }
    
    return 0;
}
