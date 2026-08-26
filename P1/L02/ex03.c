/* 3. Faça um programa que imprima os n primeiros termos da série de Fibonacci, lembrando que esta série é definida da seguinte forma:
termo1 = 1
termo2 = 1
termon = termon−1 + termon−2
O usuário do programa deve fornecer o número de termos, e estes devem ser impressos separados por um espaço. Por exemplo, se o usuário pedir os 6 primeiros termos da série de Fibonacci, o programa deve ter a seguinte saída:
1 1 2 3 5 8 */

// proximo = atual + anterior

#include <stdio.h>

int calcula_fibonacci(n) {
    int a = 0;
    int b = 1;

    for (int i = 0; a = a + b; i++) {
        printf("%d %d", a, b);
    }
}

int main(void) {
    int numero;

    printf("Digite a quantidade de termos para calcular o Fibonacci: ");
    scanf("%d", &numero);

    calcula_fibonacci(numero);

    return 0;
}