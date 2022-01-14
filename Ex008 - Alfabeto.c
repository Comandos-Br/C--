#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    char letra;

    printf("\nDigite uma letra: ");
    letra = getchar();
    printf("\nAntes da letra %c", letra - 1);
    printf("\nDepois temos a letra %c", letra + 1);
}
