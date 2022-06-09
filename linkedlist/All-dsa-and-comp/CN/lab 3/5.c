#include <stdio.h>

struct student
{
    char name[50];
    int age;
    char subjectID[20];
} x;

int main()
{
    printf("Enter the name of the student \n");
    scanf("%s", &x.name);
    printf("Enter the age of the student \n");
    scanf("%d", &x.age);
    printf("Enter the  subjectID \n");
    scanf("%s", &x.subjectID);
    printf("Accessing using structure variable \n");
    printf("%s \n", x.name);
    printf("%d \n", x.age);
    printf("%s \n", x.subjectID);
    struct student *y;
    y = &x;
    printf("Accessing using pointer variable \n");
    printf("%s \n", (*y).name);
    printf("%d \n", (*y).age);
    printf("%s \n", (*y).subjectID);
    return 0;
}