/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define PI 3.14159

int main() {
    
    float raio, area;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    area = PI * raio * raio;
    printf("Área = %.2f\n", area);
    
    return 0;
    
}