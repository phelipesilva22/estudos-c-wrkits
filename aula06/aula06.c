// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO LINGUAGEM C ANSI ---
    Professor: Engenheiro Wagner Rambo
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Aula 6 - Operadores de Assinalamento, incremento e decremento
    Dia do programa: 16/03/2025
*/ 

// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int a = 0, b = 0, c = 0, d = 0;

    puts("------------ OPERADORES INCREMENTO E DECREMENTO ------------");

    a++;
    printf("Valor de a: %d!\n", a);

    b--;
    printf("Valor de b: %d!\n", b);

    c += 1 + a;
    printf("Valor de c: %d!\n", c);

    d -= c;
    printf("Valor de d: %d!\n", d);



    return 0;
} // end main