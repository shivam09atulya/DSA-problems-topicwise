#include <stdio.h>
#include <string.h>
typedef struct st
{
    char name[30], state[30];
    int roll, age;
} student;
typedef struct newst
{
    student s;
} newStudent;
int main()
{
    newStudent s1[10];
    int n, i;
    printf("Number of students: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Student %d\nName: ", i);
        fflush(stdin);
        scanf("%[^\n]", s1[i].s.name);
        printf("Age: ");
        scanf("%d", &s1[i].s.age);
        printf("State: ");
        fflush(stdin);
        scanf("%[^\n]", s1[i].s.state);
        printf("Roll: ");
        scanf("%d", &s1[i].s.roll);
    }
    printf("\n\n");
    for (i = 1; i <= n; i++)
    {
        printf("Student %d\n", i);
        printf("Name: %s\nAge: %d\nState: %s\nRoll: %d\n", s1[i].s.name, s1[i].s.age, s1[i].s.state, s1[i].s.roll);
    }
}