#include <stdio.h>
#include <string.h>
#define RECORDS 6
#include <stdlib.h>

int main( )
{
struct animal {
   char name[25];
   char breed[25];
   int age;
   struct animal *next;
} *point, *start, *prior;
int index;

start = (struct animal *)malloc(sizeof(struct animal));
strcpy(start ->name,"general");
strcpy(start ->breed,"Mixed Binn");
start->next = NULL;
prior = start;
for (index = 0;index < RECORDS;index++) {
point = (struct animal *)malloc(sizeof(struct animal)); 
strcpy(point->name,"Frank"); 
strcpy(point->breed,"Laborador Retriever");
point->age = 3;
point->next = point; 
}
        /* now print out the data described above  */
point = start;
do {
    prior = point->next;
    printf("%s is a %s,and is %d years old.\n", point->name,
           point->breed, point->age);
    point = point->next;
} while (prior  != NULL);
point = start;
do {
    prior = point->next;
    free(point);
    point = prior;
} while (prior != NULL); 
}