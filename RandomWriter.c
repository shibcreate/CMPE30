#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 5

void createSentence(char *a[], char *n[], char *v[], char *p[]);

int main(void){
    
    srand((unsigned)time(NULL));
    
    char *article[SIZE] = {"the", "a", "one", "some"};
    char *noun[SIZE] = {"boy", "girl", "dog", "town"};
    char *verb[SIZE] = {"drove", "jumped", "walked", "skipped"};
    char *preposition[SIZE] = {"to", "from", "over", "on"};
    
    for(int i = 0; i <= 19; i++){
        createSentence(article, noun, verb, preposition);
    }
    
    
    return 0;
}

void createSentence(char *a[], char *n[], char *v[], char *p[]){
    char blankSentence[SIZE * 16] = {""};
    strcat(blankSentence, a[0 + rand() % (4 - 0)]);
    strcat(blankSentence, " ");
    strcat(blankSentence, n[0 + rand() % (4 - 0)]);
    strcat(blankSentence, " ");
    strcat(blankSentence, v[0 + rand() % (4 - 0)]);
    strcat(blankSentence, " ");
    strcat(blankSentence, p[0 + rand() % (4 - 0)]);
    strcat(blankSentence, " ");
    strcat(blankSentence, a[0 + rand() % (4 - 0)]);
    strcat(blankSentence, " ");
    strcat(blankSentence, n[0 + rand() % (4 - 0)]);
    strcat(blankSentence, ".");
    strcat(blankSentence, " ");
    blankSentence[0] = toupper(blankSentence[0]);
    printf("%s", blankSentence);
}
