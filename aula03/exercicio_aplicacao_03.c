#include <stdio.h>

int main()
{
    int potencia, hora;
    float consumo;
    
    printf("Potência do equipamento (W)? ");
    scanf("%d", &potencia);
    printf("Horas de uso por dia? ");
    scanf("%d", &hora);
    consumo =(float) (potencia * hora * 30) / 1000;
    printf("Consumo mensal: %.2f kwh", consumo);

    return 0;
}
