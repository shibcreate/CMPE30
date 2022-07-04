#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void fillArray(int *ptr, int s);
void sortArray(int *ptr, int s);
void findMedian(int *ptr, int s, int *medPtr);
void display(int *ptr, int s);

int main(){
   
    int median;
   
    int arr[100] = {0};
   
    fillArray(arr, 100);
   
    printf("The array is: ");
    display(arr, 100);
   
    printf("\nThe sorted array is: ");
    sortArray(arr, 100);
   
    display(arr, 100);
   
    findMedian(arr, 100, &median);
    printf("\nThe median is: %d", median);
   
    return 0;
}

void fillArray(int* ptr, int s){
    srand((unsigned)time(NULL));
    for(int i = 0; i < s; i++){
        *(ptr + i) = 10 + rand() % (1000 - 10);
    }
}


void display(int *ptr, int s){
    for(int i = 0; i < s; i++){
        printf("%d ", *ptr);
        ptr++;
    }
    printf("\n");
}  

void sortArray(int *ptr, int s){
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

void findMedian(int *ptr, int s, int *medPtr){
    int median = s / 2;
    if(s % 2 == 0){
        median = (*(ptr + (median - 1)) + *(ptr + median)) / 2;
    } else {
        median = *(ptr + (median - 1));
    }
   
    *medPtr = median;
}
