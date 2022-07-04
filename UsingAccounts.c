#include <stdio.h>

int main(void){

    int accountNumber;
    float balanceBeg;
    float itemsCharged;
    float creditsApplied;
    float allowedCredit;

    printf("\nEnter account number (-1 to end): ");
    scanf("%d", &accountNumber);

    while(accountNumber != -1){
    
    printf("\nEnter beginning balance: ");
    scanf("%f", &balanceBeg);

    printf("\nEnter total charges: ");
    scanf("%f", &itemsCharged);

    printf("\nEnter total credits: ");
    scanf("%f", &creditsApplied);

    printf("\nEnter credit limit: ");
    scanf("%f", &allowedCredit);

    float newBalance = balanceBeg + itemsCharged - creditsApplied;

    if(newBalance > allowedCredit){
        printf("\nAccount: %d\n", accountNumber);
        printf("\nCredit limit: %.2f\n", allowedCredit);
        printf("\nBalance: %.2f\n", newBalance);
        puts("\nCredit Limit Exceeded");
    } else {
        puts("\nWithin Credit Limit");
    }

    printf("\nEnter account number (-1 to end): ");
    scanf("%d", &accountNumber);
} 
    return 0;
}