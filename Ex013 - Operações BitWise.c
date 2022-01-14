#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int primeiro, segundo, soma1, soma2, soma3;
    printf("Digite o primeiro Valor: ");
    fflush(stdin);
    scanf("%d", &primeiro);
    printf("Digite o segundo Valor: ");
    fflush(stdin);
    scanf("%d", &segundo);
    printf("------ OPERACOES BITWISE ------");
    soma1 = (primeiro & segundo);
    soma2 = (primeiro | segundo);
    soma3 = (primeiro ^ segundo);
    printf("\nCalculando %d & %d é igual a %d", primeiro, segundo, soma1);
    printf("\nCalculando %d | %d é igual a %d", primeiro, segundo, soma2);
    printf("\nCalculando %d ^ %d é igual a %d", primeiro, segundo, soma3);
}
