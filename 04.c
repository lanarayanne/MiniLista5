/* Os juros simples em um empréstimo são calculados pela fórmula juros = capital * taxa * dias / 365. 
A fórmula anterior admite que taxa seja a taxa anual de juros e, portanto, inclui a divisão por 365(dias). 
Desenvolva um programa em C que receba os valores de capital, taxa e dias de vários empréstimos, calcule 
os juros simples de cada empréstimo e os exiba, usando a fórmula anterior. */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float juros, capital, taxa, dias=0;

    while (capital != -1)
    {
    printf ("Informe o valor do emprestimo (-1 para terminar): ");
    scanf ("%f", &capital);
    
        if (capital == -1)
        {
            break;
        }
        
    printf ("Informe a taxa de juros: ");
    scanf ("%f", &taxa);
    printf ("Informe o tempo decorrido em dias: ");
    scanf ("%f", &dias);
    
    juros = (capital * taxa * dias) /365;
    
    printf ("O valor dos juros e: %.2f\n\n", juros);

    }
    printf ("Programa Encerrado");
    
return 0; 
}