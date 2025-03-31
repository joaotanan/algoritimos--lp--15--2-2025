#include <stdio.h>

void area_trapezio() {
    float B1, B2, h, A;
    printf("Digite o valor da base maior (B1): ");
    scanf("%f", &B1);
    printf("Digite o valor da base menor (B2): ");
    scanf("%f", &B2);
    printf("Digite o valor da altura (h): ");
    scanf("%f", &h);
    A = ((B1 + B2) * h) / 2;
    printf("A área do trapézio é: %.2f\n", A);
}

int main() {
    area_trapezio();
    return 0;
}
