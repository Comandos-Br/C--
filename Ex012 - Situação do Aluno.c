#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;

    printf("Primeira Nota: ");
    fflush(stdin);
    scanf("%f", &nota1);

    printf("Segunda Nota: ");
    fflush(stdin);
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2;

    printf("A m�dia do aluno foi %.1f", media);

    if(media >= 7){
        printf("\nA sua situa��o � APROVADO! ");
    } else {
        printf("\nA sua situa��o � REPROVADO! ");
    }




}
