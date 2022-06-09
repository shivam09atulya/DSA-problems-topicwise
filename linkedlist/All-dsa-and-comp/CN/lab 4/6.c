#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1, *fp2, *fopen();
    int i;
    char c, cnt = 49;
    fp1 = fopen("input.txt", "r");
    fp2 = fopen("output.txt", "w");

    if (fp1 == NULL)
    {
        printf("Cannot open input.txt.");
        exit(1);
    }
    else if (fp2 == NULL)
    {
        printf("Cannot open output.txt.");
        exit(1);
    }
    else
    {
        c = getc(fp1);
        while (c != EOF)
        {
            putc(cnt++, fp2);
            fputs(",192.168.1.1,192.168.1.2,", fp2);

            for (i = 0; i < 5; i++)
            {
                putc(c, fp2);
                c = getc(fp1);
            }
            putc(10, fp2);
        }
        printf("Frames generated in Output.txt file.");
        fclose(fp1);
        fclose(fp2);
    }
    return 0;
}