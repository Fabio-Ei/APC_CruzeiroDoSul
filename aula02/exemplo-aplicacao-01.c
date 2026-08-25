/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int RGM;
    float nota1, nota2, media;
    printf("Digite o seu RGM: ");
    scanf("%d", &RGM);
    printf("Digite uma nota: ");
    scanf("%f", &nota1);
    printf("Digite outra nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("RGM: %i\nMédia: %.2f", RGM, media);
    
    return 0;
    
}