#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct List
{
    char name[25];
    char laptopBrand[25];
    struct List *next;
}*start, *prior, *point;

int main()
{
    start = (struct List *)malloc(sizeof(struct List));
    strcpy(start->name, "Kwame Nti");
    strcpy(start->laptopBrand, "Lenovo");
    start->next = NULL;
    prior = start;

    for (int i = 0; i < 4; i++)
    {
        point = (struct List *)malloc(sizeof(struct List));
        strcpy(point->name, "Bonsu Aku");
        strcpy(point->laptopBrand, "MacBook Pro");
        point->next = point;
        point->next = NULL;
        prior = point;
    }
    point = start;
    while (prior != NULL)
    {
        prior = point->next;
        printf("%s owns %s", point->name, point->laptopBrand);
        point = point->next;
    }

    point = start;
    while (prior != NULL)
    {
        prior = point->next;
        free (prior);
    }
}