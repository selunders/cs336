#include <stdio.h>

int main() {
    short balance = -32768;
    short choice = 0;
    short input = 0;
    printf("Your balance is $%hi\n", balance);
    printf("Would you like to (1) Deposit or (2) Withdraw: ");
    scanf("%hi", &choice);
    switch(choice) {
        case 1:
            printf("How much would you like to deposit? ");
            scanf("%hi", &input);
            balance = balance + input;
        break;
        case 2:
            printf("How much would you like to withdraw? ");
            scanf("%hi", &input);
            balance = balance - input;
        break;
        default:
        break;
    }
    printf("Your balance is $%hi\n", balance);
}