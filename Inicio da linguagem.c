#include <stdio.h>

int main (void){
    printf("Hello, World\n");
    printf("Nome: Mauricio\n");
    printf("Idade: 26 Anos.\n");
    printf("Nome do Curso: Licenciatura da Computacao.\n");

    printf("\n");
    printf("\n");

    printf("FrancoTheSir!!\n Nao sou Tom Jobim, mas faco a wave.\n");
    printf("\n");

    int numero = 2;
    int numero2 = 1;
    do {
        printf("%d x %d = %d\n",numero,numero2,numero*numero2);
        ++numero2;
    }   while (numero2<=10);
    return 0;
}
