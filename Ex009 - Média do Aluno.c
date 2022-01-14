#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[20];
    float nota1;
    float nota2;
    float media;

    printf("Nome do Aluno: ");
    fflush(stdin);
    gets(nome);
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("\nO aluno %s, tirou as notas %.1f e %.1f e ficou com média %.1f ", nome, nota1, nota2, media);
}
