#include <stdio.h>
#include <string.h>
typedef struct s
{
    char name[30], type[30];
    int id, duration;
} subject;
int main()
{
    int i, n;
    subject s1[10];
    printf("Number of subjects: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Subject %d\nName: ", i);
        fflush(stdin);
        scanf("%[^\n]", s1[i].name);
        printf("ID: ");
        scanf("%d", &s1[i].id);
        printf("Type: ");
        fflush(stdin);
        scanf("%[^\n]", s1[i].type);
        printf("Duration: ");
        scanf("%d", &s1[i].duration);
    }
    printf("\n\n");
    for (i = 1; i <= n; i++)
    {
        printf("Subject %d\n", i);
        printf("Name: %s\nID: %d\nType: %s\nDuration: %d\n", s1[i].name, s1[i].id, s1[i].type, s1[i].duration);
    }
    return 0;
}