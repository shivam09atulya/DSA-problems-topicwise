#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
int main()
{
    printf("Parent Process pid: %d \n", getpid());
    for (int i = 0; i < 2; i++)
    {
        pid_t pid = fork();
        if (pid != 0)
            break;
        if (pid == 0)
            printf("child Process pid: %d ppid %d\n", getpid(), getppid());
        else if (pid > 0)
        {
            printf("Parent Process pid: %d ppid %d\n", getpi d(), getppid());
        }
        else
            printf("Unsuccessful \n");
    }
}