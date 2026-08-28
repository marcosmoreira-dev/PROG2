/*8. Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2 e R$ 1, escreva um programa que capture um valor inteiro em reais (R$) e determine o menor número de notas para se obter o montante fornecido. A função deve ter o seguinte protótipo: int total_de_notas(int valor); */

#include <stdio.h>

int total_de_notas(int valor);

int main(void) {
    int numero;
    int totalDeNotas;

    printf("Digite o valor inteiro que deseja verificar: ");
    scanf("%d", &numero);

    totalDeNotas = total_de_notas(numero);

    return 0;
}

int total_de_notas(int valor) {
    int totalDeNotas, total100, total50, total20, total10, total5,total2, total1;

    total100 = valor / 100;
    valor = valor % 100;

    total50 = valor / 50;
    valor = valor % 50;

    total20 = valor / 20;
    valor = valor % 20;

    total10 = valor / 10;
    valor = valor % 10;

    total5 = valor / 5;
    valor = valor % 5;

    total2 = valor / 2;
    valor = valor % 2;

    total1 = valor;

    totalDeNotas = total100 + total50 + total20 + total10 + total5 + total2 + total1;

    return totalDeNotas;

}