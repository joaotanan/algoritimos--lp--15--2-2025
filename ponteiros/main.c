#include <stdio.h>

//Modos de abertura de arquivos
//"p" - Para leitura
//'w' - criar/sobreescrever e escrevr nos arquivos
//'a' - criar, e não existit, e adicionar ao final do arquivo


int main(int argc, char* argv[]){

    FILE *sexta = fopen("sexta.txt", "w");

    if(sexta == NULL){
        printf("erro ao abrir arquivo.");
        return 1;
    }

    fprintf(sexta, "Hello, World");

    fclose(sexta);

    return 0;
}
