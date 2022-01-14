#import <stdio.h>
void main(){
    char nome[30];
    char ender[40];
    printf("Digite seu nome: ");
    fflush(stdin);
    gets(nome);
    printf("Digite seu endereco: ");
    fflush(stdin);
    gets(ender);
    printf("Voce digitou \"%s\" e que mora em \"%s\"", nome, ender);
}
