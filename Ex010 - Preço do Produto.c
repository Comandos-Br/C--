#include <stdio.h>
#include <locale.h>
void main(){
    char produto[20];
    float preco, desconto, novoProduto;
    printf("Produto: ");
    fflush(stdin);
    gets(produto);
    printf("Pre�o de %s: R$", produto);
    fflush(stdin);
    scanf("%f", &preco);
    printf("Desconto: (%%) ");
    fflush(stdin);
    scanf("%f", &desconto);
    novoProduto = preco - (preco*desconto/100);
    printf("O produto %s custava R$%.2f.\n", produto, preco);
    printf("Por�m, com %.2f%% de desconto, passa a custar R$%.2f\n", desconto, novoProduto);

}
