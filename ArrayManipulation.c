#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void populate(int *ptr, int s);
void bubbleSortAscending(int *ptr, int s);
void bubbleSortDescending(int *ptr, int s);
double findMedian(int arr[], int s);

void display(int *ptr, int s);

int main(){
   
    int arr[20] = {0};
   
    populate(arr, 20);
   
    printf("The array is: ");
    display(arr, 20);
   
    printf("\nThe Ascending sorted array is: ");
    bubbleSortAscending(arr, 20);
   
    display(arr, 20);
   
    printf("\nThe Descending sorted array is: ");
    bubbleSortDescending(arr, 20);
   
    display(arr, 20);
   
    printf("\nThe median is: %.2lf", findMedian(arr, 20));
   
    return 0;
}

void populate(int* ptr, int s){
    srand((unsigned)time(NULL));
    for(int i = 0; i < s; i++){
        *(ptr + i) = -500 + rand() % (500 + 500);
    }
}


void display(int *ptr, int s){
    for(int i = 0; i < s; i++){
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}  

void bubbleSortAscending(int *ptr, int s){
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
             if (*(ptr + j) > *(ptr + i)) {
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}

void bubbleSortDescending(int *ptr, int s){
    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
             if (*(ptr + j) < *(ptr + i)) {
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
}

double findMedian(int arr[], int s){
    int median = s / 2.0;
   
    if(s % 2 == 0){
        median = (*(arr + (median - 1)) + *(arr + median)) / 2.0;
    } else {
        median = *(arr + (median - 1));
    }
   
    return median;
}
