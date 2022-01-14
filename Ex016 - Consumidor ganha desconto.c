#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float valorCompra, desconto, valorComDesconto;

    printf("Qual foi o valor total das compras ? R$");
    scanf("%f", &valorCompra);
    printf("----------------------------\n");
    printf("Você comprou R$%.2f na nossa loja. ", valorCompra);

    desconto = (valorCompra * 10) / 100;
    valorComDesconto = valorCompra - desconto;

    if(valorCompra >= 500){
        printf("\n========== ATENÇÃO ========= \n");
        printf("Por fazar mais de R$500 em compras, você vai receber R$ %.2f de desconto", desconto);
        printf("\nO valor a ser pago é R$%.2f! Volte Sempre!", valorComDesconto);
        printf("\n----------------------------\n");
    } else {
       printf("\nVolte Sempre!");
       printf("\n----------------------------\n");
    }

}
