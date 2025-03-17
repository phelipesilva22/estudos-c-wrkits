// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO LINGUAGEM C ANSI ---
    Professor: Engenheiro Wagner Rambo
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Aula 7 - Laço de condição if
    Dia do programa: 16/03/2025
*/ 
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int a, b;

    puts("---------- LAÇO DE CONDIÇÃO IF ----------");

    printf("Digite um valor para a: ");
    scanf("%d", &a);

    printf("Digite o valor para b: ");
    scanf("%d", &b);

    if (a < b)
        puts("A menor que B");
    else if (b < a)
        puts("B menor que A");
    else 
        puts("VALORES IGUAIS!");


    return 0;
} // end main