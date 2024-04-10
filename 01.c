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
    
    float b, c;  // b = Km rodados | c= litros obtidos por abastecimento.
    printf ("Digite a quantidade de quilometros rodados: ");
    scanf ("%f", &b);
    printf ("Digite quantos litros de gasolina são obtidos por abastecimento: "); 
    scanf ("%f", &c);
    float kmplit = b/c; // Considerando que todo o abastecimento foi utilizado.
    printf ("A cada Km rodado, foram utilizados %.2f litros de gasolina \n", kmplit);
    
    int d = 0; // d=vezes abastecidas, começando em nenhuma
    float calc, total=0; // calc= calcula a ser realizado e total = total de Km/L de todos os abastecimentos
    
    while (d <= a) //Realizar condição até que a quantidade de vezes abastecidas seja igual q quantidade de abastecimentos declarada. 
    {
    calc = d * kmplit; //Cada vez que abastecer multiplica pelo Km/L
    total = total + calc; // 0 + resultado de calc; depois o resultado de total + calc...
    d = d + 1; // A cada repetição a quantidade de abastecimentos aumenta em 1.
    }
    
    printf ("A quantidade total de Km por litro para %d abastecimento(s) e igual a %.2f", a, total);
    
return 0;
}