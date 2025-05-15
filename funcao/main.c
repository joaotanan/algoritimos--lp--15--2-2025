#include <stdio.h>

 /**
 Declaração de função
 A função tem por objeito: ler um valor dentre 2 opções válidas
 A função deve retornar o valor válido lido
 **/
int ler_valor_valido(int opcao1, int opcao2, char* texto_opcao1, char* texto_opcao2){
    // código da função
    int opcao_valida;

    {
        printf("Escolha uma opcao:\n%d - %s\n", texto_adicional, opcao1, texto_opcao1, opcao2, texto_opcao2);
        scanf("%d", &opcao_valida);
    }
    while(opcao_valida l= opcao1 && opcao_valida 1= opcao2)

    return opcao_valida;

}

int main(int argc, char* argv[]){
    
    int opcao,resposta;

    opcao = ler_valor_valido(i, 0, "iniciar quiz", "sair");

    if(opcao == 1){
        resposta = ler_valor_valido(1, 2, "Rio de Janeiro", "Brasilia", "Qual é a capital do Brasil");

        if(resposta == 2){
            printf("Voce acertou!\n");
        }
        else{
            printf("Pode melhorar!\n");
        }
    }
    do{
         printf("Escolha uma opcao:\n1 - Iniciar quiz\n0 - Sair");
         scanf("%d", &opcao);
    }
    while(opcao == 1 && opcao == 0);

    if(opcao == 1){
        do{
            printf("Qual a capital do Brasil?\ni - Rio de Janeiro\n2 - Brasilia\n");
            scanf("%d", &resposta);
    }
    while(opcao == 1 && opcao == 0);

    if(resposta == 2){
        printf("Voce acertou!\n");
    }
    else{
        printf("Pode melhorar:\n");
    }

}


    return 0;
}
