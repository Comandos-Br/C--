#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int numero;
    float terca;
    printf("\nDigite um número: ");
    scanf("%d", &numero);
    printf("\nAnalisando o número %d", numero);
    printf("\n seu dobro e %d", numero * 2);
    terca = (float)numero / 3;
    printf("\n e sua terça parte e %.2f", terca);


}
