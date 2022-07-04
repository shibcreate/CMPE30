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

        double factorial = 1;
        double e = 0;

        for(double y = 1; y <= number; y++){
            
            factorial = y * factorial;     

            e += 1/factorial; 
        }

        printf("e calculated value: %lf\n", e+1);

        printf("Enter a non-negative integer to compute factorial (-1 to end): ");
        scanf("%d", &number);
    }

    return 0;
}