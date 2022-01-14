#include<stdio.h>
#include<locale.h>
#include<time.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm * data;
    data = localtime(&t);
    int ano = data -> tm_year + 1900;
    int anoNascimento, idade;

    printf("Em que ano Você nasceu ? ");
    scanf("%d", &anoNascimento);
    idade = ano - anoNascimento;

    printf("----------------------------\n");
    printf("Você tem %d anos, certo?", idade);
    printf("\nSeja bem-vindo(a) ao Banco Estudonauta!");
    if( idade >= 65){
       printf("\n=== ATENÇÂO! DIRIJA-SE PARA A FILA PREFERENCIAL === ");
    }
    printf("\n----------------------------\n");
}
