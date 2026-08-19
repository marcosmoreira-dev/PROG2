/* 3. Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais. O programa deve retornar o resultado da operação recebida sobre estes dois números.*/

#include <stdio.h>

int main(void) {
    char operador;
    float a;
    float b;
    float resultado;
    printf("Digite qual o seu operador (+, -, /, *): ");
    scanf(" %c", &operador);

    printf("Digite o primeiro valor real: \n");
    scanf("%f", &a);
    printf("Digite o segundo valor real: \n");
    scanf("%f", &b);

    if (operador == '+') {
        resultado = a + b;
        printf("O resultado é igual a: %.2f\n", resultado);
    } else if (operador == '-') {
        resultado = a - b;
        printf("O resultado é igual a: %.2f\n", resultado);
    } else if (operador == '*') {
        resultado = a * b;
        printf("O resultado é igual a: %.2f\n", resultado);
    } else if (operador == '/') {
        if (b != 0) {
            resultado = a / b;
            printf("O resultado é igual a: %.2f\n", resultado);
        } else {
            printf("Erro: Divisão por zero não é permitida!\n");
        }
    } else {
        printf("Operador inválido!\n");
    }

    return 0;
}