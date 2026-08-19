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

    switch (operador) {
        case '+':
            printf("Resultado: %.2f\n", a + b);
            break;
        case '-':
            printf("Resultado: %.2f\n", a - b);
            break;
        case '*':
            printf("Resultado: %.2f\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Resultado: %.2f\n", a / b);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
        print("Operador inválido!\n");
    }

    return 0;
}