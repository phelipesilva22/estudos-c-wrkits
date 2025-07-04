// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
     --- CURSO LINGUAGEM C ANSI ---
    Professor: Engenheiro Wagner Rambo
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: AULA 10 - LAÇO FOR E LAÇO ANINHADO
    Dia do programa: 03/07/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int opcao, valor;
    char resp;

    do
    { 
        puts("---------- DECLARAÇÃO SWITCH ----------");
        puts("[1] - DECIMAL PARA HEXADECIMAL");
        puts("[2] - HEXADECIMAL PARA DECIMAL");
        puts("[3] - DECIMAL PARA OCTA");
        puts("[4] - OCTA PARA DECIMAL");
        puts("[5] - HEXADECIMAL PARA OCTA");
        puts("[6] - OCTA PARA HEXADECIMAL");
        printf("Opção >>> ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("Digite um número: ");
                scanf("%d", &valor); 
                printf("O valor %d é %X em hexadecimal!\n", valor, valor);
                break;
            case 2:
                printf("Digite um número: ");
                scanf("%X", &valor);
                printf("O valor %X é %d em decimal!\n", valor, valor);
                break;
            case 3:
                printf("Digite um número: ");
                scanf("%d", &valor);
                
                printf("O valor %d é %o em octal!\n", valor, valor);
                break; 
            case 4:
                printf("Digite um número: ");
                scanf("%o", &valor);
                printf("O valor %o é %d em decimal!\n", valor, valor);
                break; 
            case 5:
                printf("Digite um número: ");
                scanf("%x", &valor);
            
                printf("O valor %X é %o em octal!\n", valor, valor);
                break; 
            case 6:
                printf("Digite um número: ");
                scanf("%o", &valor);

                printf("O valor %o é %X em hexadecimal!\n", valor, valor);
                break; 
            default:
                puts("OPÇÃO INVÁLIDA!");
                break;
        }
        
        puts("Deseja continuar? ");
        printf(">>> ");
        scanf(" %c", &resp);
        system("clear");
    } while (resp != 'n');
    
    return 0;
} // end main