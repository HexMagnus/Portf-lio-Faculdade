/* Portfólio 3
Curso: Análise e desenvolvimento de sistemas
Professor: Luciano Bergamo
Disciplina: Laboratório de Programação
Aluno: Lucas Curan Martins
Data: 30/04/2022
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>

    int main()

 {

    char nome_prod[100][20];
    char continuar = '0';
    char produto;
    float valor_unitario[100] = {};
    float quantidade[100] = {};
    float total[100] = {};
    float total1[100] = {};
    float total2[100] = {};
    float total3[100] = {};
    float desconto[100] = {};
    float subtotal[100] = {};
    float porcentagem[3] = { 0.05 ,0.08,0.1 };
    int classificacao = 0;
    int i=0;

    while (toupper(continuar) != 'N')

 {

    printf("Insira a classificacao dos produto(s)\n");

    printf("1 - Informatica\n");
    printf("2 - Jogos\n");
    printf("3 - Eletronicos\n");

    printf("codigo correspondente ao tipo de classificacao ----: ");
    scanf("%d", &classificacao);

    printf("nome do produto -----------------------------------: ");
    scanf("%s", nome_prod[i]);

    printf("valor do produto ----------------------------------: ");
    scanf("%f", &valor_unitario[i]);

    printf("quantidade de unidades a serem compradas ----------: ");
    scanf("%f", &quantidade[i]);
 

        subtotal[i] = valor_unitario[i] * quantidade[i];
        desconto[i] = valor_unitario[i] * porcentagem[classificacao-1];
        total[i] = (subtotal[i] - desconto[i] * quantidade[i]);


    i++;

    while ( fgetc(stdin) != '\n');

    printf("\nDeseja continuar,\nInforme s para sim ou n para abandonar o programa -: ");
    scanf("%c", &continuar);
    printf("\n\n");

    if (i > 10)break;

 }


    if (i > 11)printf("\nUltrapassou o Limite de Deposito , que eh cinco produtos . . . !\n\n");
    for(int j=0; j<i; j++)

 {
 
    printf("O seu produto e um(a) ------------------: %s\n" , nome_prod [j] );
    printf("Foram comprados(a) ---------------------: %5.2f\n" , quantidade [j] );
    printf("Valor unitario de ----------------------: %5.2f\n" , valor_unitario[j] );
    printf("Valor total sem desconto ---------------: %5.2f\n" , subtotal [j] );
    printf("O percentual de desconto e de ----------: %5.2f\n" , porcentagem [j] );
    printf("O desconto foi de ----------------------: %5.2f\n" , desconto [j] );
    printf("Valor total com o desconto aplicado ----: %5.2f\n\n", total [j] );
    printf("\n\n");
 
 }
 
    printf("O valor total da compra foi de -: %5.2f\n\n", total[0]+total[1]+total[2]+total[3]);
 

 return 0;} 