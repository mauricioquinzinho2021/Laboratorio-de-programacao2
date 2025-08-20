#include <stdio.h>

int main(){
    int num1;
    int num2;

    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("Digite o segundo numero: ");
    scanf("%d",&num2);

    int soma = num1 + num2;
    printf("Soma dos numeros: %d",soma);
    printf("\n");
    int subtracao = num1 - num2;

    printf("Subtracao dos numeros: %d",subtracao);
    printf("\n");

    int multiplicacao = num1 * num2;
    printf("Multiplicacao dos numeros: %d",multiplicacao);
    printf("\n");

    float divisao = num1 / num2;
    printf("Divisao dos numeros: %d",divisao);
    printf("\n");

    float resto = num1 % num2;
    printf("Resto dos numeros: %d",resto);

    float pi = 3.14;
    float raio,area;
    
    printf("\n Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("A area da circunferencia eh: %2.f\n", area);

    int idade;
    printf("\n Digite a idade:");
    scanf("%d", &idade);

    printf("\nVoce viveu aproximadamente: %d", idade*365);

    float numero;
    printf("\nDigite um numero: ");
    scanf("%f", &numero);
    
    if (numero > 0) {
        printf("O numero eh positivo.");

    } else if (numero < 0){
        printf("O numero eh negativo.");
    } else{
        printf("O numero eh zero.");
    }
    
    int nume1, nume2;
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &nume1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &nume2);

    if (nume1 > nume2) {
        printf("O primeiro numero eh maior.");
    } else{
        printf("O segundo numero eh maior do que o primeiro.");
    }

    return 0;
    

    
}