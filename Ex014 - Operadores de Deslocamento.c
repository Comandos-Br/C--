#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int numero, deslocamento, soma1, soma2, soma3;
    printf("Digite Um numero: ");
    fflush(stdin);
    scanf("%d", &numero);
    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%d", &deslocamento);
    printf("------ OPERACOES SHIFT ------");
    soma1 = (numero << deslocamento);
    soma2 = (numero >> deslocamento);

    printf("\nCalculando %d << %d é igual a %d", numero, deslocamento, soma1);
    printf("\nCalculando %d >> %d é igual a %d", numero, deslocamento, soma2);

}
