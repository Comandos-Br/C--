#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int numero;
    float terca;
    printf("\nDigite um n�mero: ");
    scanf("%d", &numero);
    printf("\nAnalisando o n�mero %d", numero);
    printf("\n seu dobro e %d", numero * 2);
    terca = (float)numero / 3;
    printf("\n e sua ter�a parte e %.2f", terca);


}
