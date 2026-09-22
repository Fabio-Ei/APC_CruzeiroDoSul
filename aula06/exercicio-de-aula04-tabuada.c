/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero1, numero2, total;
    
    printf("Digite o número da tabuada: ");
    scanf("%d", &numero1);
    
    for(numero2 = 1; numero2 <= 10; numero2++) {
        printf("%d x %d = %d\n", numero1, numero2, numero1 * numero2);
    }
    return 0;
}