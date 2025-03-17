// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO LINGUAGEM C ANSI ---
    Professor: Engenheiro Wagner Rambo
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Aula 5 - Operadores Lógicos
    Dia do programa: 16/03/2025
*/ 
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char a = 1, b = 2, c = 3, d = 1;

    puts("--------- OPERADORES LÓGICOS ---------");

    if (a > b && a < c)
        puts("Resultado condição 1: TRUE");
    else if (c == d || d == a)
        puts("Resultado condição 2: TRUE");
    else
        puts("Resultados das condições: FALSE");

    return 0;
} // end main