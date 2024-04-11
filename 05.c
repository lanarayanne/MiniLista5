/* 5)Escreva um programa que leia o lado de um quadrado e então imprima o quadrado com asteriscos. 
Seu programa deve funcionar com quadrados de todos os tamanhos entre 1 e 20. Por exemplo, se seu programa 
lesse um tamanho 4, deveria imprimir */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int lado, base, altura;
    

    while ((lado > 1) || (lado < 20))
    {
    
    printf ("Informe o tamanho do lado do quadrado (entre 1 e 20) (-1 para sair): ");
    scanf ("%d", &lado); //valor do lado

    if (lado == -1) // encerrar o programa 
        {
        printf ("Programa Encerrado");
        break; 
        }
    if (lado < 1 || lado >20) //Não realizar o calculo se o valor estiver fora do determinado
        {
        printf ("Valor Incorreto\n");
        continue; 
        }
    for (altura=0; altura < lado; altura++) // enquanto a altura estiver menor que o lado ele vai realizar o proximo for
    {
        for (base=0; base < lado; base++) // enquanto a altura estiver menor que o lado e enquanto a base estiver menor que o lado vai imprimir um *
        {
            printf ("*"); 
        }
        printf ("\n"); //pula uma linha quando a base estiver maior que lado
    }
    } 
    
 return 0;
}
