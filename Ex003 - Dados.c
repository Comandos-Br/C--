#include <stdio.h>
#include <locale.h>
void main(){
     setlocale(LC_ALL, "Portuguese");
     char nome[15];
     int idade;
     float peso;

     printf("Qual � seu nome ? ");
     gets(nome);

     printf("Quantos anos voc� tem ? ");
     fflush(stdin);
     scanf("%i", &idade);

     printf("Qual � o seu peso ? ");
     fflush(stdin);
     scanf("%f", &peso);

     printf("-----<<<<< PROCESSANDO >>>>>----- \n");
     printf("Muito prazer,%s. Voc� tem %i anos e pessa %.1fKG Correto ?  \n", nome, idade, peso);
     printf("FIM DO PROGRAMA\n");

}
