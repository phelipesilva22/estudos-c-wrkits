// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO LINGUAGEM C ANSI ---
    Professor: Engenheiro Wagner Rambo
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Aula 4 - Operadores Aritméticos e Relacionais
    Dia do programa: 16/03/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int valor1, valor2;

    puts("--------- OPERADORES RELACIONAIS e ARITMÉTICOS ---------");

    printf("Valor 1: ");
    scanf("%d", &valor1);

    printf("Valor 2: ");
    scanf("%d", &valor2);

    printf("%d + %d = %d\n", valor1, valor2, valor1 + valor2);

    printf("%d - %d = %d\n", valor1, valor2, valor1 - valor2);

    printf("%d * %d = %d\n", valor1, valor2, valor1 * valor2);

    printf("%d / %d = %d\n", valor1, valor2, valor1 / valor2);

    printf("%d %% %d = %d\n", valor1, valor2, valor1 % valor2);

    return 0;
} // end main