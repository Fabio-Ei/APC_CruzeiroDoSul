#include <stdio.h>
#include <math.h>

int main()
{
    int participantes, jogadoresPorTime, computadores;
    float potencia, duracao, precoKwh, precoKit, outrosCustos;
    
    int quantidadeTimes;
    float consumoEnergia, custoEnergia, custoAlimentacao, custoTotal, custoParticipante;
    
    printf("Digite a quantidade de participantes: ");
    scanf("%d", &participantes);
    printf("Defina a quantidade de jogadores em cada time: ");
    scanf("%d", &jogadoresPorTime);
    printf("Digite a quantidade de computadores utilizados: ");
    scanf("%d", &computadores);
    printf("Digite a potência média de cada computador, em watts: ");
    scanf("%f", &potencia);
    printf("Digite a duração do evento, em horas: ");
    scanf("%f", &duracao);
    printf("Digite o preço de 1 kWh de energia: ");
    scanf("%f", &precoKwh);
    printf("Digite o preço de um kit de alimentação por participante: ");
    scanf("%f", &precoKit);
    printf("Digite o custo de outros eventos: ");
    scanf("%f", &outrosCustos);
    
    quantidadeTimes =  ceil( (float) participantes / jogadoresPorTime);
    consumoEnergia = (float) (computadores * potencia * duracao) / 1000;
    custoEnergia = consumoEnergia * precoKwh;
    custoAlimentacao = participantes * precoKit;
    custoTotal = custoEnergia + custoAlimentacao + outrosCustos;
    custoParticipante = custoTotal / participantes;
    
    printf("========== ARENA TECH ==========\n");
    printf("Participantes: %d\n", participantes);
    printf("Times necessários: %d\n", quantidadeTimes);
    printf("Consumo estimado: %.2f kWh\n", consumoEnergia);
    printf("Custo de energia: R$ %.2f\n", custoEnergia);
    printf("Custo da alimentação: R$ %.2f\n", custoAlimentacao);
    printf("Outros custos: R$ %.2f\n", outrosCustos);
    printf("CUSTO TOTAL: R$ %.2f\n", custoTotal);
    printf("CUSTO POR PARTICIPANTE: R$ %.2f\n", custoParticipante);
    printf("================================");

    return 0;
}