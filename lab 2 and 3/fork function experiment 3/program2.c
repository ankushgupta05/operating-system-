/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>  // declare for fork()


int main()
{
     int pid, c1, c2;
    c1 = fork();
    if (c1 == 0)
   {
        printf("pid number of child c1 is %d\n", getpid());
        printf("pid number of parent of c1 is %d\n", getppid());
    
        c2 = fork();
        if(c2 == 0)
        {
        printf("pid number of second child is  %d\n", getpid());
        printf("pid number of parent of c2 is %d\n", getppid());
            
        }
        else{
        wait(NULL);
        printf("pid number of process  %d\n", getppid());
            
        }
   }
    
    return 0;
}
