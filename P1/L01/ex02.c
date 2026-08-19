/* 2. Fazer um programa que recebe 3 valores inteiros do usuário e mostra o maior deles, o menor deles, os pares e a média */

#include <stdio.h>

int main(void) {
    int a, b, c;
    int maior;
    int menor;
    float media;

    printf("Digite o primeiro valor inteiro \n");
    scanf("%d", &a);
    printf("Digite o segundo valor inteiro \n");
    scanf("%d", &b);
    printf("Digite o terceiro valor inteiro \n");
    scanf("%d", &c);

    printf("Números pares digitados: ");
    if (a % 2 == 0) printf("%d ", a);
    if (b % 2 == 0) printf("%d ", b);
    if (c % 2 == 0) printf("%d ", c);
    printf("\n");

    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;

    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    printf("Maior valor:%d\n", maior);
    printf("Menor valor:%d\n", menor);


    media = (a + b + c) / 3.0;

    printf("Média = %.2f\n", media);

    return 0;
}