#include <stdio.h>
#include <locale.h>

void main(){
     setlocale(LC_ALL, "Portuguese");
     int numero;
     printf("Digite um n�mero qualquer: ");
     scanf("%d", &numero);
     if(numero % 2 == 0){
        printf("O numero que voc� digitou � PAR!\n");
     } else {
        printf("O n�mero que voc� digitou � �MPAR!\n");
     }

}
