#include <stdio.h>
#include <locale.h>

void main(){
     setlocale(LC_ALL, "Portuguese");
     int numero;
     printf("Digite um número qualquer: ");
     scanf("%d", &numero);
     if(numero % 2 == 0){
        printf("O numero que você digitou é PAR!\n");
     } else {
        printf("O número que você digitou é ÍMPAR!\n");
     }

}
