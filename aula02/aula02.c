// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    --- CURSO LINGUAGEM C ANSI ---
    Professor: Engenheiro Wagner Rambo
    Autor: Phelipe Bruione da Silva
    Objetivo do programa: Aula 2 - Case Sensitive, scanf e comentários
    Dia do programa: 16/03/2025
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("O número digitado foi: %d!\n", numero);
    return 0;
} // end main