#include <stdio.h>

#define TAM_NOME 64

typedef struct Aluno{
    char nome[TAM_NOME];
    float nota;
};

void imprimir_aluno(struct Aluno a){
    printf("%s - Nota: %.2f\n", a.nome, a.nota);
}

int main() {

    int n = 5;
    struct Aluno alunos[n];

    printf("Digite o nome do aluno 0: \n");
    fgets(alunos[0]->nome, TAM_NOME, stdin);
    printf("Digite a nota do aluno 0: ");
    scanf("%f", alunos[0]->nota);

    imprimir_aluno(alunos[0]);

    return 0;
}
