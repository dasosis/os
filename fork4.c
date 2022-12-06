#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    int n,f;
    printf("enter a number - ");
    scanf("%d",&n);
    f = fork();
    if (f == 0)
    {
        printf("change number to - ");
        scanf("%d",&n);
        printf("number changed to %d in child process",n);
    }    
    return 0;
}
