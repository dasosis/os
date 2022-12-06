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
        int i = n;
        do i++;
            while (i%2);
        printf("%d(child process)\n",i);    
    }
    else
    {
        int i = n;
        do i++;
            while (!i%2);
        printf("%d(parent process)\n",i);
    }
    
    
    
    
    return 0;
}
