#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;

    printf("Please enter three different number values: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Given three numbers %d, %d, %d\n", num1, num2, num3);

    int sum = num1 + num2 + num3;
    printf("Sum is %d\n", sum);

    int average = (num1 + num2 + num3)/3;
    printf("Average is %d\n", average);

    int prod = num1 * num2 * num3;
    printf("Product is %d\n", prod);

    int large;
    int small;

    if(num1 < num2 && num1 < num3){
        small = num1;
    }

    if(num2 < num1 && num2 < num3){
        small = num2;
    }

    if(num3 < num2 && num3 < num1){
        small = num3;
    }

    if(num1 > num2 && num1 > num3){
        large = num1;
    }

    if(num2 > num1 && num2 > num3){
        large = num2;
    }

    if(num3 > num2 && num3 > num1){
        large = num3;
    }

    printf("Smallest is %d \n", small);
    printf("Largest is %d \n", large);

    return 0;
}