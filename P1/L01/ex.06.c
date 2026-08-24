/* 6. Implemente uma função que calcule as raízes de uma equação do segundo grau, do tipo ax2 + bx + c = 0. Observação: para o cálculo da raiz quadrada de um número, utilize a função sqrt. Consulte a documentação de como usá-la no programa.*/

#include <stdio.h>
#include <math.h>

void calcular_raizes(float a, float b, float c) { 
    if (a == 0) {
        printf("Não é uma equação do segundo grau, escolha outro coeficiente a!");
    }

    float delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("A equação não possui raízes reais (delta = %.2f\n)", delta)
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("A equação possui uma raiz real dupla x = %.2f\n", x)
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes são: x1 = %.2f e x2 ")
    }
}

int main(float a, float b, float c) {
    float delta;
    double x1, x2;
    
    printf("Digite o coeficiente a: \n");
    scanf("%f", &a);
    printf("Digite o coeficiente b: \n");
    scanf("%f, &b");
    printf("Digite o coeficiente c: \n");
    scanf("%f, &c");

    delta = (b * b) - 4 * a * c;
    x1 = -b + sqrt(delta) / 2*a;
    x2 = -b  - sqrt(delta) / 2*a;

    return 0;

}