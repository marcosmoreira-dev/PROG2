/* 4. Um funcionário da UFF precisa validar as notas de 3 provas fornecidas por um professor e indicar: a média, se está aprovado reprovado e se tem direito de realizar a VS. Inicialmente, faça um programa que recebe como entrada as 3 notas e mostre os resultados solicitados. Posteriormente, coloque o código de cálculo da média em uma função. Em um passo seguinte, realize os controles necessários para não receber notas inválidas. */

#include <stdio.h>

float calculaMedia(float a, float b, float c) {
    return (a + b + c / 3.0);
}

float leNotaValida(int numeroNota) {
    float nota;

    do {
        printf("Digite a %d° nota (0 a 10)", numeroNota);
        scanf("%f", &nota);
        if (nota < 0 || nota > 10) {
            printf("Nota inválida! Tente novamente. \n");
        }
    } while (nota < 0 || nota > 10);
    return nota;
}

int main(void) {
    float n1, n2, n3, media;

    n1 = leNotaValida(1);
    n2 = leNotaValida(2);
    n3 = leNotaValida(3);

    media = calculaMedia(n1, n2, n3);
    printf("Média final: %.2f\n", media);

    if (media >= 0 && media <= 10)
        if (media > 6.0) {
            printf("Situação: Aprovado!\n");
        } else if (media >= 4.0) {
            printf("Situação: Direito a realizar a VS\n");
        } else {
            printf("Situação: Reprovado!\n");
        }
    else {
        printf("A média não está entre 0 e 10. Digite as notas corretas");
    }

    return 0;
}