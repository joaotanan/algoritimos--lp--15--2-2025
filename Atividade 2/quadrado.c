#include <stdio.h>

void area_quadrado() {
    float L, A;
    printf("Digite o valor do lado (L): ");
    scanf("%f", &L);
    A = L * L;
    printf("A área do quadrado é: %.2f\n", A);
}

int main() {
    area_quadrado();
    return 0;
}
