// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO LINGUAGEM C ANSI ---
    Professor: Engenheiro Wagner Rambo
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Aula 09 - LAÇO FOR E LAÇO ANINHADO
    Dia do programa: 03/07/2025
*/

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    
    puts("---------- LAÇO FOR e LAÇO FOR ANINHADO ----------");

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            printf(" %d ", i * j);
        }
        putchar('\n');
    }

    return 0;
} // end main