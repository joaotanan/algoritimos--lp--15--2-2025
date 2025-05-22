#include <stdio.h>

int main() {
    int numero;
    int Primo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if (numero <= 1) {
        Primo = 0;
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                Primo = 0;
                break;
            }
        }
    }

    if (Primo) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0;
}
