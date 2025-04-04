#include <stdio.h>

int main(int argc, char* argv[]){

printf("Digite a idade: ");

char opcao;
printf("Digite o tipo de filme: \n");
printf("l - leve\n");
printf("i - intenso\n");
scanf("%c", &opcao);

if (opcao == 'l'){
    char generoleve;
    printf("Escolha o genero do seu filme\n");
    printf("C - Comedia\n");
    printf("A - Animação\n");
    printf("digite a opcao: \n");
    scanf("%c", &generoleve);

    if(generoleve == 'C'){
        printf("Assista o filme 'As branquelas'.\n");
    } else if (generoleve == 'A'){
        printf("Assista o filme 'toy story'.\n")
    } else {
        printf("Opcao invalida para o genero.\n")

    }

}else if(opcao == 'l'){
    char generointenso;
    printf("Escolha o genero do seu filme\n");
    printf("T - Terror\n");
    printf("A - Acao\n");
    printf("digite a opcao: \n");
    scanf("%C" , &generointenso);
}

}