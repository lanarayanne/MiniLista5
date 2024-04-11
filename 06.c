/* 6)Um palíndromo é um número ou texto que é lido da mesma forma tanto da direita para a esquerda como da esquerda para a direita. 
Por exemplo, cada um dos inteiros seguintes, de cinco dígitos, é palíndromo: 12321,55555,45554 e 11611.
Escreva um programa que leia um inteiro de cinco dígitos e determine se ele é palíndromo ou não. 
(Sugestão: Use os operadores divisão e resto, para separar o número em seus algarismos isolados.) */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numero, dig1, dig2, dig3, dig4, dig5, rest1, rest2, rest3, rest4, rest5;
    
    while (numero != -1)
    {
    
    printf ("Digite um numero de cinco digitos (-1 para sair): ");
    scanf ("%d", &numero);
    
        if (numero == -1) // se digitar 1 encerra o programa 
            {
            printf ("Programa Encerrado");
            break; 
            }
    
    dig1 = numero / 10000;
    rest1 = numero % 10000;
    
    dig2 = rest1 / 1000;
    rest2 = rest1%1000;
    
    dig3 = rest2 / 100;
    rest3 = rest2%100;
    
    dig4 = rest3 / 10;
    rest4 = rest3%10;
    
    dig5 = rest4 / 1;
    rest5 = rest3%1;
    
            if (dig1 == 0 || dig1>10) //Não realizar o calculo se o valor estiver fora do determinado
            {
            printf ("Valor Incorreto\n");
            continue; 
            }
    
    printf ("O numero %d ao contrario e %d%d%d%d%d\n", numero,dig5,dig4,dig3,dig2,dig1);
    
            if (dig1==dig5 && dig2==dig4) {printf("O numero %d e um palindromo\n", numero);}
            else {printf ("O numero %d nao e um palindromo\n", numero);}
    }
    
 return 0;
}