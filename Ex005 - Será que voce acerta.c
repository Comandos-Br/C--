#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int numero = rand () % 5 + 1;
    int palpite;
    printf("Vou pensar em um numero entre 1 e 5, tente adivinhar!\n");
    printf("Qual é o seu Palpite ? ");
    scanf("%d", &palpite);
    printf("Eu pensei no número %d e você pensou no %d.",numero, palpite);

}
