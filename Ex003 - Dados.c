#include <stdio.h>
#include <locale.h>
void main(){
     setlocale(LC_ALL, "Portuguese");
     char nome[15];
     int idade;
     float peso;

     printf("Qual é seu nome ? ");
     gets(nome);

     printf("Quantos anos você tem ? ");
     fflush(stdin);
     scanf("%i", &idade);

     printf("Qual é o seu peso ? ");
     fflush(stdin);
     scanf("%f", &peso);

     printf("-----<<<<< PROCESSANDO >>>>>----- \n");
     printf("Muito prazer,%s. Você tem %i anos e pessa %.1fKG Correto ?  \n", nome, idade, peso);
     printf("FIM DO PROGRAMA\n");

}
