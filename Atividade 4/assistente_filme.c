#include <stdio.h>

int main() {
    int tipoFilme, genero, subtipo;

    printf("Escolha o tipo de filme:\n");
    printf("1 - Leve\n");
    printf("2 - Intenso\n");
    scanf("%d", &tipoFilme);

    if (tipoFilme == 1) {
        printf("Escolha o genero:\n");
        printf("1 - Comedia\n");
        printf("2 - Animacao\n");
        scanf("%d", &genero);

        if (genero == 1) {
            printf("Assista ao filme: As Branquelas\n");
        } else if (genero == 2) {
            printf("Assista ao filme: Toy Story\n");
        } else {
            printf("Opcao invalida.\n");
        }

    } else if (tipoFilme == 2) {
        printf("Escolha o genero:\n");
        printf("1 - Terror\n");
        printf("2 - Acao\n");
        scanf("%d", &genero);

        if (genero == 1) {
            printf("Escolha o tipo de terror:\n");
            printf("1 - Psicologico\n");
            printf("2 - Sobrenatural\n");
            scanf("%d", &subtipo);

            if (subtipo == 1) {
                printf("Assista ao filme: Coral\n");
            } else if (subtipo == 2) {
                printf("Assista ao filme: Invocacao do mal\n");
            } else {
                printf("Opcao invalida.\n");
            }

        } else if (genero == 2) {
            printf("Escolha o tipo de acao:\n");
            printf("1 - Super-herois\n");
            printf("2 - Aventura realista\n");
            scanf("%d", &subtipo);

            if (subtipo == 1) {
                printf("Assista ao filme: Vingadores: Ultimato\n");
            } else if (subtipo == 2) {
                printf("Assista ao filme: Mad Max: Estrada da Furia\n");
            } else {
                printf("Opcao invalida.\n");
            }

        } else {
            printf("Opcao invalida.\n");
        }

    } else {
        printf("Opcao invalida.\n");
    }

    return 0;
}
