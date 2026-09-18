/* 4. Fazer uma função denominada divs() que:
a. recebe como parâmetro um número inteiro n por valor e dois números inteiros max e min por
referência;
b. retorna 0 se o número num é primo e 1 caso contrário. Se o número não for primo, as variáveis
max e min devem assumir os valores do menor e do maior divisores inteiros do número,
respectivamente, desconsiderando o número 1 e o próprio número num. */

#include <stdio.h>

int divs(int num, int *max, int *min);

int main(void) {
    int n, maior, menor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (divs(n, &maior, &menor) == 0) {
        printf("O numero %d e PRIMO.\n", n);
    } else {
        printf("O numero %d NAO E PRIMO.\n", n);
        printf("Menor divisor: %d\n", menor);
        printf("Maior divisor: %d\n", maior);
    }

    return 0;
}

int divs(int num, int *max, int *min) {
    // Numeros menores ou iguais a 1 nao sao primos (retorna 1: nao primo)
    if (num <= 1) {
        return 1;
    }

    // Procura o menor divisor a partir de 2
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            *min = i;          // Primeiro divisor encontrado e o menor
            *max = num / i;    // O quociente correspondente e o maior divisor
            return 1;         
        }
    }

    return 0; 
}