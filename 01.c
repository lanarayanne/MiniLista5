/* Os motoristas se preocupam com o consumo de combustível de seus automóveis. 
Um motorista manteve um registro do número de abastecimentos que fez, registrando 
também o número de quilômetros rodados e de litros obtidos a cada abastecimento. 
Desenvolva um programa que peça o número de quilômetros dirigidos e a quantidade de 
litros obtidos a cada abastecimento. O programa deverá calcular e exibir a quantidade 
de quilômetros rodados por litros usados. Depois de processar toda a informação, o 
programa deverá calcular e exibir o total combinado de quilômetros por litro para todos 
os abastecimentos. A quantidade de abastecimentos, a quantidade de litros, bem como o 
consumo devem ser definidos, para fins de teste, pelo desenvolvedor.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a; // a= quantidade de abastecimentos 
    printf ("Quantas vezez foi realizado abastecimento?: ");
    scanf ("%d", &a);
    
    int d = 1; // d=vezes abastecidas
    float calc; // calc= calcula a ser realizado
    float kmtotal, litrostotal, kmplit;
    while (d <= a) //Realizar condição até que a quantidade de vezes abastecidas seja igual q quantidade de abastecimentos declarada. 
    {
      float b, c;  // b = Km rodados | c= litros obtidos por abastecimento.
    printf ("\n %d) Digite a quantidade de quilometros rodados: ", d);
    scanf ("%f", &b);
    printf (" %d) Digite quantos litros de gasolina são obtidos por abastecimento: ", d); 
    scanf ("%f", &c);
    float kmplit = b/c; // Considerando que todo o abastecimento foi utilizado.
    printf (" %d) A cada Litro de gasolina, o carro andou %.2f Km \n\n", d, kmplit);
    
    kmtotal= d* b;
    litrostotal = d*c;
    calc = kmtotal/litrostotal; // 
    d = d + 1; // A cada repetição a quantidade de abastecimentos aumenta em 1.
    }
    
    printf ("A quantidade total de Km/L para %d abastecimento(s) e igual a %.2f", a, calc);
    
return 0;
}