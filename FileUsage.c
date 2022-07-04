#include <stdio.h>

struct Student {
    char name[50];
    int id;
    double age;
};

void populate(struct Student s[], int size, FILE *ptr);
void findOldest(struct Student s[], int size, FILE *ptr);

int main(void){
    FILE *fp;
    //fp = fopen("studentsinfo.txt", "w");
    if(fp == NULL){
        printf("File Unable To Be Located");
    } else {
        printf("File Found\n");
    }
    struct Student studentsinfo[5];
    struct Student students[5];
    populate(students, 5, fp);

    if ((fp = fopen("studentsinfo.txt", "r")) == NULL) {
        printf("Error! File Unable To Open");
    }

    for(int i = 0; i < 5; i++){
        fscanf(fp, "%[^\n]", studentsinfo);
    }

    findOldest(students, 5, fp);
    
    return 0;
}

void populate(struct Student s[], int size, FILE *ptr){
     for (int i = 0; i < size; i++)
    {
        printf("Enter student %d name: \n", i+1);
        scanf("%s", &s[i].name);
        
        printf("Enter student %d id: \n", i+1);
        scanf("%d", &s[i].id);
        
        printf("Enter student %d age: \n", i+1);
        scanf("%lf", &s[i].age);

        fprintf(ptr, "%s %d %lf\n", s[i].name, s[i].id, s[i].age);

    }
    fclose(ptr);
}

void findOldest(struct Student s[], int size, FILE *ptr){
    double oldest = s[0].age;
    int person = 0;
      for(int i = 0; i < size; i++){
          if(s[i].age > oldest){
             oldest = s[i].age;
             person = i;
          }
      }

      printf("The oldest student is %s", s[person].name);
}
