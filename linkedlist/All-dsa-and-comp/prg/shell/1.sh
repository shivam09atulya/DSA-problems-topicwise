#include <stdio.h>
#include <unistd.h>
void main()
{
    int temp;
    printf(" \n parents PID :%d \t ppid : %d \n", getpid(), getppid());
    temp = fork();
    if (temp == 0)
    {
        printf("PID : %d \t PPID : %d \n", getpid(), getppid());
        temp = fork();
        if (temp == 0)
        {
            printf("PID : %d \t PPID : %d \n", getpid(), getppid());
            temp = fork();
            if (temp == 0)
            {
                printf("PID : %d \t PPID : %d \n", getpid(), getppid());
                wait(NULL);
                return;
            }
            wait(NULL);
            return;
        }
        else
            return;
    }

    temp = fork();
    if (temp != 0)
    {
        wait(NULL);
        return;
    }
    printf("PID : %d \t PPID : %d \n", getpid(), getppid());
    temp = fork();
    if (temp == 0)
    {
        printf("PID : %d \t PPID : %d \n", getpid(), getppid());
        wait(NULL);
        return;
    }
    temp = fork();
    if (temp == 0)
    {
        printf("PID : %d \t PPID : %d \n", getpid(), getppid());
        wait(NULL);
        return;
    }

    wait(NULL);
    sleep(1);
    return;
}
