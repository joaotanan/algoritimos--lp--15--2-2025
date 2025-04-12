#include <stdio.h>

int main() {
    int n, i, k, aprovados = 0;
    float soma = 0, maior, menor;

    printf("Digite o numero de alunos: ");
    scanf("%d", &n);

    float notas[n];

    for (i = 0; i < n; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];

        if (notas[i] >= 6.0)
            aprovados++;

        if (i == 0) {
            maior = menor = notas[i];
        } else {
            if (notas[i] > maior) maior = notas[i];
            if (notas[i] < menor) menor = notas[i];
        }
    }

    printf("\nMedia da turma: %.2f\n", soma / n);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Alunos aprovados: %d\n", aprovados);

    printf("\nDigite a posicao (0 a %d) para ver a nota: ", n - 1);
    scanf("%d", &k);

    if (k >= 0 && k < n)
        printf("Nota do aluno na posicao %d: %.2f\n", k, notas[k]);
    else
        printf("Posicao invalida.\n");

    return 0;
}
