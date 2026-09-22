/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int participantes;
    
    do {
        printf("Digite a quantidade de participantes de 1 a 3 participantes: ");
        scanf("%d", &participantes);
    } while(participantes <= 0 || participantes > 3);
    
    printf("A quantidade de participantes é: %d", participantes);
    return 0;
}