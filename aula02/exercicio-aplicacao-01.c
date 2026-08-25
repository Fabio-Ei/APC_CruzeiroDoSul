/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define PI 3.14

int main() {
    
    float raio, perimetro;
    printf("Digite o raio da peça circular: ");
    scanf("%f", &raio);
    perimetro = 2 * raio * PI;
    printf("O perimetro da peça é: %.2f", perimetro);
    
    return 0;
    
}