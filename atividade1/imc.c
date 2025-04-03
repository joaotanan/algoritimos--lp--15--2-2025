#include <stdio.h>

int main()
{
    // Declaração das variáveis
    float altura, peso, imc;

    // Leitura dos valores de altura e peso
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite o seu peso (em kg): ");
    scanf("%f", &peso);

    // Cálculo do IMC usando a fórmula: imc = peso / (altura * altura)
    imc = peso / (altura * altura);

    // Exibindo o resultado
    printf("O seu IMC é: %.2f\n", imc);

    if(imc <= 18.5){
        printf("baixo peso\n");
    }

    if(imc > 18.5 && imc <= 24.9){
        printf("intervalo normal\n");
    }

    if(imc > 24.9 && imc <= 29.9){
        printf("sobrepeso\n");
    }

    if(imc > 29.9 && imc <= 34.9){
        printf("obesidade I\n");
    }

    if(imc > 34.9 && imc <= 39.9){
        printf("obesidade II\n");
    }

    if(imc > 39.9){
        printf("obesidade III\n");
    }



    return 0;
}
