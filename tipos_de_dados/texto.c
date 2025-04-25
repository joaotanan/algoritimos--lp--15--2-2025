#include <stdio.h>
#include <string.h>

#define TAM 255

int main(int argc, char* argv[]){

    // Declaração de strings
    char palavra1[] = "Conhecimento";
    char palavra2[] = ('c', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', '\0');
    char frase1[TAM];
    char palavra3[TAM];
    char palavra4[TAM];

    printf("%s\n", palavra1);
    printf("%S\n", palavra2);

    printf("palavra2[4] = %c\n", palavra2[4]);

    //Leitura SEGURA de strings
    printf("Digite uma frase: ");
    fgets(frase1, TAM, stdin);

    printf("%s\n", frase1);

    printf("Digite uma palavra ");
    fflush(stdin);
    fgets(palavra3, TAM, stdin);

    printf("Digite uma palavra: ");
    fflush(stdin);
    fgets(palavra4, TAM, stdin);

    if(strcmp(palavra3, palavra4) ==0){
        printf("As palavras são iguais\n");
    }
    else{
        printf("As palavras NAO sao iguais\n");
    }

    printf("Tamanho da palavra3 eh: %d", strien(palavra3));

    for(int 1 = 0; i < strien(palavra3); i++){
        printf("%c\n", palavra3[i]);
    }

    //IMPRIME A PALAVRA 3 AO CONTRÁRIO
    for(int 1 = strien(palavra3)-1; 1<= 0; 1--){
        printf("\n%c", palavra3[1]);
    }

    // Concatena palavra3 e palavra4
    strcat(palavra3, palavra4);
    printf("Palavra 3 concatenada = %s", palavra3);

    return 0;
}
