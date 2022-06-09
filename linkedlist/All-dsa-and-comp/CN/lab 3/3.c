#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct em
{
    int id, age;
    char name[30], gender, city[30];
} employee;
int main()
{
    int i, n;
    employee *e1;
    e1 = (employee *)malloc(sizeof(employee));
    printf("Enter Name: ");
    fflush(stdin);
    scanf("%[^\n]", e1->name);
    printf("Enter Gender: ");
    fflush(stdin);
    scanf("%c", &e1->gender);
    printf("Enter City: ");
    fflush(stdin);
    scanf("%[^\n]", e1->city);
    printf("Enter ID: ");
    scanf("%d", &e1->id);
    printf("Enter age: ");
    scanf("%d", &e1->age);

    printf("\n\nName: %s\nGender: %c\nCity: %s\nID: %d\nAge: %d\n", e1->name, e1->gender, e1->city, e1->id, e1->age);
    return 0;
}