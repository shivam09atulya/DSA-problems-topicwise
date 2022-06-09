#include <stdio.h>
#include<stdlib.h>
struct person
{
    int age;
    char name[50];
};

int main()
{
    struct person *ptr;
    int noOfRecords;
    printf("Enter the number of records: ");
    scanf("%d", &noOfRecords);

    ptr = (struct person *)malloc(noOfRecords * sizeof(struct person));
    for (int i = 0; i < noOfRecords; ++i)
    {
        printf("Enter age and name:\n");
        scanf("%d %s", &(ptr + i)->age, (ptr + i)->name);
    }

    printf("Displaying Information:\n");
    for (int i = 0; i < noOfRecords; ++i)
    {
        printf("%d %s \n", (ptr + i)->age, (ptr + i)->name);
    }

    free(ptr);

    return 0;
}