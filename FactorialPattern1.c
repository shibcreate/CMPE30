#include <stdio.h>

int main(void){

    int number;

    printf("Enter a non-negative integer to compute factorial (-1 to end): ");
    scanf("%d", &number);

    while(number != -1){

        if(number < 0){
            puts("Enter a non-negative number");
            break;
        }

        //Factorial Computation - Begin
        int factorial = 1;

        for(int i = 1; i <= number; i++){
            factorial = i * factorial;
        }
        //Factorial Computation - End

        printf("Factorial: %d\n", factorial);

        printf("Enter a non-negative integer to compute factorial (-1 to end): ");
        scanf("%d", &number);
    }

    return 0;
}