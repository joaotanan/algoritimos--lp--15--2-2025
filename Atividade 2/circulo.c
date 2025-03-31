#include <stdio.h>

void area_circulo() {
    float r, A;
    const float PI = 3.14159;  // Definindo o valor de Pi manualmente
    printf("Digite o valor do raio (r): ");
    scanf("%f", &r);
    A = PI * r * r;
    printf("A área do círculo é: %.2f\n", A);
}

int main() {
    area_circulo();
    return 0;
}
