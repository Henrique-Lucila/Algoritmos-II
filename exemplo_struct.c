/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct aluno{
    int ra;
    double nota;
};

int main()
{
    struct aluno a[3];
    int i;
    
    for (i = 0; i < 3; i++){
        a[i].ra = i + 1;
        a[i].nota = i * i;
    }
    
    for (i = 0; i < 3; i++){
        printf("RA: %d | Nota: %1.lf\n",
        a[i].ra, a[i].nota);
    }

    return 0;
}
