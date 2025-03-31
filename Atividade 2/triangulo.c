#include <stdio.h>

void area_triangulo() {
    float b, h, A;
    printf("Digite o valor da base (b): ");
    scanf("%f", &b);
    printf("Digite o valor da altura (h): ");
    scanf("%f", &h);
    A = (b * h) / 2;
    printf("A área do triângulo é: %.2f\n", A);
}

int main() {
    area_triangulo();
    return 0;
}
