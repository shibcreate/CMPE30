#include <stdio.h>

double calculateCharges(double hours);

int main(void){

    double hoursOfCustomers[3];
    double totalHours;
    double totalCharges;

    printf("Enter three hours for three different parked cars (in 1 line): ");
    scanf("%lf %lf %lf", &hoursOfCustomers[0], &hoursOfCustomers[1], &hoursOfCustomers[2]);

    printf("Car\tHours\tCharge\n");

    for(int i = 0; i <= 2; i++){
        double charges =  calculateCharges(hoursOfCustomers[i]);
        printf("%d\t%.2lf\t%.2lf\n", i+1, hoursOfCustomers[i], charges);
        totalHours += hoursOfCustomers[i];
        totalCharges += charges;
    }

    printf("TOTAL\t%.2lf\t%.2lf", totalHours, totalCharges);

    return 0;
}

double calculateCharges(double hours){
    double charges;

    if(hours <= 3.0){
        charges = 2.0;
    } else if (hours >= 19){
        charges = 10.0;
    } else {
        charges = 2.0 + (0.5*(hours-3.0));
    }

    return charges;
}

