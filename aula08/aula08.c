// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
    --- CURSO LINGUAGEM C ANSI ---
    Professor: Engenheiro Wagner Rambo
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Aula 8 - Conversor de Bases Númericas (Projeto 01)
    Dia do programa: 16/03/2025
*/ 
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char res;
    int op, valor;

    do
    {
        puts("---------- CONVERSOR DE BASES NÚMERICAS ----------");
        
        puts("[1] - DECIMAL PARA HEXADECIMAL");
        puts("[2] - HEXADECIMAL PARA DECIMAL ");
        puts("[3] - DECIMAL para OCTA");
        puts("[4] - OCTA PARA DECIMAL");
        puts("[5] - HEXADECIMAL para OCTA");
        puts("[6] - OCTA PARA HEXADECIMAL");
        puts("-----------------------------------------------");
        printf("Selecione sua opção: ");
        scanf("%d", &op);
        
        if (op == 1 || op == 3)
        {
            printf("Informe o valor em decimal: ");
            scanf("%d", &valor);    
        } else if (op == 2 || op == 5)
        {
            printf("Informe o valor em hexadecimal: ");
            scanf("%x", &valor); 
        } else if (op == 4 || op == 6)
        {
            printf("Informe o valor em octal: ");
            scanf("%o", &valor); 
        } else 
            puts("OPÇÃO INVÁLIDA!");

        switch (op)
        {
        case 1:
            printf("Valor %d em HEXADECIMAL é %X!\n", valor, valor);
            break;
        case 2:
            printf("Valor %X em DECIMAL é %d!\n", valor, valor);
            break;
        case 3:
            printf("Valor %d em OCTAL é %o!\n", valor, valor);
            break;
        case 4:
            printf("Valor %o em DECIMAL é %d!\n", valor, valor);
            break;
        case 5:
            printf("Valor %X em OCTAL é %o!\n", valor, valor);
            break;
        case 6:
            printf("Valor %o em HEXADECIMAL é %X!\n", valor, valor);
            break;
        }
        
        printf("Deseja continuar? [S/N] ");
        scanf(" %c", &res);
        res = tolower(res);
        system("clear");


    } while (res != 'n');
    puts("ENCERRANDO O PROGRAMA...");


    return 0;
} // end main