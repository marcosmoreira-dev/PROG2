/* Implemente um programa que chame a função média com o seguinte protótipo:
float media(int n, float *v) */

float media(int n, float *v);

int main() {
    int numeroDeNotas = 5;
    float notas[] = {10, 5.8, 7.8, 2.3, 5.0};
    float resultado = media(numeroDeNotas, notas);

    printf("Media = %.2f\n", resultado);
    return 0; 
}

float media(int n, float *v) {
    float somaTotal = 0.0;
    
    for (int i = 0; i < n; i++) {
        somaTotal += v[i];
    }

    return somaTotal / n;
}