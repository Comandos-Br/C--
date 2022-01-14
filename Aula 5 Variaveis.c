#include <stdio.h>
void main () {
    unsigned int idade = 33;
    float peso = 85.9;
    char sexo = 'M';
    char *nome = "Juvenal";

    printf("%s e do sexo %c, tem %i anos e pesa %.1fKg", nome, sexo, idade, peso);
}
