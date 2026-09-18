/* Implemente a função max_vet, que recebe como parâmetro um vetor de números de ponto
flutuante (vet) de tamanho n e retorna o maior número armazenado nesse vetor. Essa função deve
obedecer o protótipo: float max_vet (int n, float * vet);
Faça também a função main.*/

#include <stdio.h>

float max_vet(int n, float *vet);

int main() {
    int n;
    float vetor[];
    float num;

    printf("Digite a quantidade de números no vetor: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        printf("Digite o número %d da lista: ", n)
        scanf("")
    }
    return 0;
}

float max_vet(int n, float *vet) {
    float maior = -999999;

    for (int i = 0; i <= vet[n]; i++) {
        if (vet[n] >= maior) {
            maior = vet[n];
        }
    }
    
}