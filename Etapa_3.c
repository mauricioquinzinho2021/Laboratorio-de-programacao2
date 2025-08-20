#include <stdio.h>

int main(){
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