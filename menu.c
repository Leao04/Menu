#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    system("cls");
    int lis;
    int dob = 2;
    int num, i;
    int num2;
    int num3;
    int num4;
    int num5;
    int num6;
    int num7;
    int num8;
    int num9;
    int num10;
    int num11;
    int num12;
    int num13;
    int num14;
    int num15;
    int loop = 0;
    int quant;
    float quant2;
    int totalP = 15;

        printf("\n |MENU PRINCIPAL|");
        printf("\n - - - - - - - - - - - - - - - - - - - -");
        printf("\n                               Menu de opcoes");
        printf("\n|       1. Tabuadas                                                                  |");
        printf("\n|       2. Veja numeros entre 300 ao 500                                             |");
        printf("\n|       3. Informe um numero e veja o dobro dele                                     |");
        printf("\n|       4. Veja numeros entre 600 ao 900 e suas manipulacoes                         |");
        printf("\n|       5. Verifique se ja alcancou a maioridade                                     |");
        printf("\n|       6. Verifique uma breve forma sendo formada                                   |");
        printf("\n|       7. Digite o faturamento da loja                                              |");
        printf("\n|       8. Verifique os números entre 1.000 e 2.000 que, dividido por 11 tem resto 2 |");
        printf("\n|       9. Digite a idade de 15 pessoas e receba alguns dados                        |");
        printf("\n|       0. Sair                                                                      |\n");
        printf("\n - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
           printf ("Digite uma opcao de 0 a 9: ");
  scanf("%d", &lis);


   switch ( lis )
  {
    case 1 :
      printf ("Coloque um numero para ver sua tabuada: ");
    scanf ("%d", &num);

    printf ("\n Tabuada do %d", num);
    for ( i = 1; i <= 10; i++)  {
        printf ("\n %d * %d = %d", num, i, (num*i));
    }
    return 0;  ;
    break;

    case 2 :
     for (loop = 300; loop <=600; loop++) {
                    printf("%d \n",loop);
                }
                return 0;
    break;

    case 3 :
    printf("\n Digite um numero: ");
    scanf ("%d", &num);
    printf("\n %d * %d = %d", num, dob, (num*dob));
    break;

    case 4 :
    for (loop = 600;loop <=900;loop++) {
                    printf("%d \n",loop);
                }

        printf("\n A somatoria eh: 1500");
        printf("\n A media simples eh: 750");
        printf("\n A media pondera eh: 800 \n");
        for (loop = 600;loop <=900;loop++) {
                    if(loop % 2 == 0)
        printf("%d Eh par. \n", loop);
    else
        printf("%d Eh impar. \n", loop);
                }

    break;

    case 5 :
    printf("\n Digite sua idade: \n");
    scanf("%d", &num);
       if (num >= 18) {
       printf("\n Voce ja possui maioridade penal.");
    } else {
       printf("\n Voce nao possui maioridade penal.");
    }
    break;

    case 6 :
    printf ("\n - - - - - - Observe a figura estruturada - - - - - - - ");
    printf ("\n 1- +++");
    printf ("\n 2- +++++");
    printf ("\n 3- =======");
    printf ("\n 4- +++++");
    printf ("\n 5- +++");
    break;

    case 7 :
    printf ("\n Digite abaixo o valor faturado pela loja e veja se ultrapassou o valor da loja B \n");
    scanf ("%d", &num);
    if (num > 54000) {
        printf("\n A loja faturou mais do que a loja B \n");
    } else {
         printf("\n A loja nao faturou mais do que a loja B \n");
    }
    break;

    case 8 :

    for (loop = 1000;loop <=2000;loop++) {
                    printf("%d \n",loop);
                    if (loop % 11 == 2) {
                        printf("%d \n", loop);
                    }
                }
    break;

    case 9 :
    printf("\n Receba aqui a idade de 15 pessoas! \n");
    scanf("%d", &num);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    scanf("%d", &num5);
    scanf("%d", &num6);
    scanf("%d", &num7);
    scanf("%d", &num8);
    scanf("%d", &num9);
    scanf("%d", &num10);
    scanf("%d", &num11);
    scanf("%d", &num12);
    scanf("%d", &num13);
    scanf("%d", &num14);
    scanf("%d", &num15);
    printf("\n Agora veja a quantidade de pessoas em cada faixa etaria: \n");

    if (num <= 15) {
        printf("\n A faixa etaria eh ate 15 anos");
        quant=15;
    }
    if (num >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant=30;
    }
     if (num >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant=45;
    }
    if (num >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant=60;
    }
    if (num2 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant=15;
    }
     if (num2 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant=30;
    }
     if (num2 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant=45;
    }
    if (num2 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant=60;
    }
     if (num3 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant=15;
    }
     if (num3 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant=30;
    }
     if (num3 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant=45;
    }
    if (num3 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant=60;
    }
     if (num4 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant=15;
    }
     if (num4 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant=30;
    }
     if (num4 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant=45;
    }
    if (num4 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant=60;
    }
     if (num5 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant=15;
    }
     if (num5 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant=30;
    }
     if (num5 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant= 45;
    }
    if (num5 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant= 60;
    }
      if (num6 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant= 15;
    }
     if (num6 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant= 30;
    }
     if (num6 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant= 45;
    }
    if (num6 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant= 60;
    }
      if (num7 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant= 15;
    }
     if (num7 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant= 30;
    }
     if (num7 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant= 45;
    }
    if (num7 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant= 60;
    }
      if (num8 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant= 15;
    }
     if (num8 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant= 30;
    }
     if (num8 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant= 45;
    }
    if (num8 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant= 60;
    }
      if (num9 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant= 15;
    }
     if (num9 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant= 30;
    }
     if (num9 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant= 45;
    }
    if (num9 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant= 60;
    }
      if (num10 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant= 15;
    }
     if (num10 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant= 30;
    }
     if (num10 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant= 45;
    }
    if (num10 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant= 60;
    }
        if (num11 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant= 15;
    }
     if (num11 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant= 30;
    }
     if (num11 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant= 45;
    }
    if (num11 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant= 60;
    }
         if (num12 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant= 15;
    }
     if (num12 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant= 30;
    }
     if (num12 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant= 45;
    }
    if (num12 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant= 60;
    }
         if (num13 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant= 15;
    }
     if (num13 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant= 30;
    }
     if (num13 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant= 45;
    }
    if (num13 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant= 60;
    }
         if (num14 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant= 15;
    }
     if (num14 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant= 30;
    }
     if (num14 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant= 45;
    }
    if (num14 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant= 60;
    }
         if (num15 <= 15) {
         printf("\n A faixa etaria eh ate 15 anos");
         quant= 15;
    }
     if (num15 >= 30) {
         printf("\n A faixa etaria eh ate 30 anos");
         quant= 15;
    }
     if (num15 >= 45) {
         printf("\n A faixa etaria eh ate 45 anos");
         quant= 45;
    }
    if (num15 >= 60) {
         printf("\n A faixa etaria eh ate 60 anos");
         quant= 60;
    }

   printf("\n Agora que vimos a quantidade total, coloque abaixo o valor de pessoas com ate 15 anos para ver a porcentagem total: \n");
   scanf("\n %d", &num);
   quant2 = (float)num / totalP * 100.0;
   printf("O valor total eh: = %.2f%%", quant2);

    printf("\n Agora que vimos a quantidade total, coloque abaixo o valor de pessoas entre 46 e 60 anos para ver a porcentagem total: \n");
    scanf("\n %d", &num);
    quant2 = (float)num / totalP * 100.0;
    printf("O valor total eh: = %.2f%%", quant2);
    break;

    case 0:
    exit;
    break;

    default :
    printf ("Valor invalido!\n");
  }

  getch();
  return 0;
}
