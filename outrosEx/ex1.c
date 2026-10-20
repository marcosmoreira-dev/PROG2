#include <stdio.h>

typedef struct ponto {
    int x, y, z;
} Ponto;

void troca (Ponto *p1, Ponto *p2) {
    int temp;

    temp = p1;
    p2 = p1;
    p1 = p2;
}

Ponto *novoPonto(int x, int y, int z) {
    
}

int main() {

}