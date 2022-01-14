#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    printf("\nAnalisando o número %d", numero);
    printf("\nSeu antecessor e %d", numero - 1);
    printf("\nSeu sucessor e %d", numero + 1);

}
