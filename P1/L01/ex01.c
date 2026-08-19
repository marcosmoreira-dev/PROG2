/* 1. Fazer um programa para receber um número inteiro de segundos do usuário e 
   imprimir a quantidade correspondente em horas, minutos e segundos. */

#include <stdio.h>

int main(void)
{
    // 1. Declarando apenas variáveis inteiras
    int total_segundos;
    int horas, minutos, segundos_restantes;
    int resto;

    // 2. Leitura dos dados do usuário
    printf("Digite um tempo em segundos: ");
    scanf("%d", &total_segundos);

    // 3. Cálculos da conversão
    horas = total_segundos / 3600;
    resto = total_segundos % 3600; 

    minutos = resto / 60;               
    segundos_restantes = resto % 60;

    // 4. Exibição do resultado
    printf("\n%d segundos equivalem a: %d horas, %d minutos e %d segundos.\n", total_segundos, horas, minutos, segundos_restantes);

    return 0;
}