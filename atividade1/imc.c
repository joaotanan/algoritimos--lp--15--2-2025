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

    return 0;
}
