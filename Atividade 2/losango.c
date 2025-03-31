#include <stdio.h>

void area_losango() {
    float D, d, A;
    printf("Digite o valor da diagonal maior (D): ");
    scanf("%f", &D);
    printf("Digite o valor da diagonal menor (d): ");
    scanf("%f", &d);
    A = (D * d) / 2;
    printf("A área do losango é: %.2f\n", A);
}

int main() {
    area_losango();
    return 0;
}
