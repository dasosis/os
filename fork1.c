#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
    int nf;
    printf("hello guys (pid-%ld)\n",(long)getpid());
    fork();
    printf("hello guys (pid-%ld)\n",(long)getpid());
    fork();
    printf("hello guys (pid-%ld)\n",(long)getpid());
    
    printf("enter number of fork() calls - ");
    scanf("%d",&nf);
    for (int i = 1; i <= nf; i++)
    {
        fork();
        printf("iteration %d (pid %ld ppid %ld)\n",i,(long)getpid(),(long)getppid());
    }
    
    
    
    return 0;
}
