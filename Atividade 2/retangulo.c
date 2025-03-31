#include <stdio.h>

void area_retangulo() {
    float b, h, A;
    printf("Digite o valor da base (b): ");
    scanf("%f", &b);
    printf("Digite o valor da altura (h): ");
    scanf("%f", &h);
    A = b * h;
    printf("A área do retângulo é: %.2f\n", A);
}

int main() {
    area_retangulo();
    return 0;
}
