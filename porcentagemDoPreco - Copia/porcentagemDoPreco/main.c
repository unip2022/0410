#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade, contagem, opcao, parcelas;
    float preco=0, desconto, somapreco, precoMaisParcelas=0;

    printf("\t\t\tSeja bem vindo ao nosso autoatendimento.\n"
           "Digite quantas pe�as de roupa voc� gostaria de comprar: ");
   scanf("%d", &quantidade);

   for(contagem=1; contagem<=quantidade; contagem++)
   {
       printf("Digite o pre�o da %d� pe�a de roupa: ", contagem);
       scanf("%f", &somapreco);
       preco=preco+somapreco;
   }
    system("cls || clear");
    printf("De qual maneira voc� gostaria de pegar?\n"
           "1. A vista(10%% de desconto).    2. Em duas vezes.   3. Entre 3 e 10 vezes (3%% de juros no m�s).\n");
   scanf("%d", &opcao);
    contagem=0;
   if (opcao==1){
       desconto=(preco*90)/100;
   }

   if(opcao==2){
        desconto=preco;
   }

   if(opcao==3){
    printf("Voc� gostaria de parcelar em quantas vezes, entre 3 e 10: ");
    scanf("%d", &parcelas);
    if(parcelas==3){
        for(contagem=0; parcelas<=contagem; contagem++){
            precoMaisParcelas=precoMaisParcelas+preco+((preco*3)/100);
            printf("%f preco mais parcelas", precoMaisParcelas);
            desconto=precoMaisParcelas;
        }
    }
   }

   printf("O pre�o a ser pago sera %.2f", desconto);
    return 0;
}
