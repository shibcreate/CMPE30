#include <stdio.h>

#define SIZE 100



void mean(int answer[]);             // function prototype

void median(int answer[]);           // function prototype

void mode(int freq[], int answer[]); // function prototype

void bubbleSort(int answer[]);



int main(void)

{ 



   // array of responses

   int response[SIZE] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,

                         7, 8, 9, 5, 9, 8, 7, 8, 7, 1,

                         6, 7, 8, 9, 3, 9, 8, 7, 1, 7,

                         7, 8, 9, 8, 9, 8, 9, 7, 1, 9,

                         6, 7, 8, 7, 8, 7, 9, 8, 9, 2,

                         7, 8, 9, 8, 9, 8, 9, 7, 5, 3,

                         5, 6, 7, 2, 5, 3, 9, 4, 6, 4,

                         7, 8, 9, 6, 8, 7, 8, 9, 7, 1,

                         7, 4, 4, 2, 5, 3, 8, 7, 5, 6,

                         4, 5, 6, 1, 6, 5, 7, 8, 7, 9};

   int frequency[10] = {0}; // array of response frequencies

    printf("The original data array of size %d is:  ", SIZE);

   for(int i = 0; i < SIZE; i++){
       printf("%d ", response[i]);
   }

   mean(response); // process mean

   median(response); // process median

   mode(frequency, response); // process mode

   return 0;

} 

void mean (int answer[]){

    double total = 0;

    for(int i = 0; i < SIZE; i++){
        total += answer[i];
    }

    printf("\nThe mean of this array data is: %.2lf which is %.2lf / %d\n", total / SIZE, total, SIZE);

}

void median (int answer[]){

   bubbleSort(answer);

    printf("The sorted array is: ");
    for(int i = 0; i < SIZE; i++){
       printf("%d ", answer[i]);
    }

    if(SIZE % 2 == 0){
        
        printf("\nThe median is: %d which is value (%d + %d) / 2", (answer[SIZE/2] + answer[SIZE/2 + 1]) / 2, SIZE/2, SIZE/2 + 1);

    } else {
        printf("\nThe median is: %d which is value %d", answer[SIZE / 2], SIZE/2);
    }

}

void bubbleSort(int sorted[]){

    for (int i = 1; i < SIZE; i++){

        for (int j = 0; j < SIZE - 1; j++){

            if(sorted[j] > sorted[j + 1]){
                int change = sorted[j];
                sorted[j] = sorted[j + 1];
                sorted[j + 1] = change;
            }

        }

    }

}

void mode (int freq[], int answer[]){


    printf("\nResponse\tFrequency\n");

    for(int i = 0; i < SIZE; i++){
        freq[answer[i]]++;
    }

    for(int i = 1; i <= 9; i++){
        printf("%d\t%d\t", i, freq[i]);
        for(int j = 1; j <= freq[i]; j++){
            printf("*");
        }
        printf("\n");
    }

    int arr[] = {0 , 0};
    int modeHigh = 0;

    for(int i = 1; i <= 9; i++){
        if(freq[i] > modeHigh){
            modeHigh = freq[i];
            arr[0] = i;
        }
    }

    printf("The mode(s) are: %d with a frequency of %d ", arr[0], modeHigh);

    for(int i = 1; i <= 9; i++){
        if(freq[i] == modeHigh){
            modeHigh = freq[i];
            arr[1] = i;
        }
    }

    if(arr[0] != arr[1]){
        printf("and %d with a frequency of %d ", arr[1], modeHigh);
    }

}