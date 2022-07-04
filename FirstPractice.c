#include <stdio.h>

/*
float takes 4 bytes and double takes 8 bytes and int takes 4 bytes
float takes less space 
*/

/* First Test

int main(){

    puts("Hello World!");

    double yourfeeling;
    scanf_s("%lf", &yourfeeling);
    // & == address operator (tells where "yourfeeling" is located)


    printf_s("You cool %lf :D\n", round(yourfeeling));
    printf_s("Address: %d\n", &yourfeeling);
    // a memory address above 0x80000000 on a 32-bit system will be negative

    return 0;

}
*/

int main(int argc, const char * argv[]){

    printf_s("Enter a number: \n");

    int number;
    scanf_s("%d", &number);

    number = number + 5;

    printf("The number is %d", number);
    //%d is decimal number
    //don't put & because you want the value

    return 0;       
}