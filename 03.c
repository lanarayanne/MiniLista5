/* Desenvolva um programa em C que determine se um cliente de uma loja de departamentos excedeu o limite de crédito de sua conta. 
Os seguintes dados de cada cliente estão disponíveis: 
a) Número da conta 
b) Saldo no início do mês 
c) Total de todos os encargos desse cliente nesse mês 
d) Total de todos os créditos aplicados à conta desse cliente nesse mês 
e) Limite de crédito autorizado. 
O programa deverá ler cada um desses dados, calcular o novo saldo (= saldo inicial + encargos — créditos) e determinar se o novo 
saldo é superior ao limite de crédito do cliente. 
Para os clientes cujo limite de crédito foi ultrapassado, o programa deve exibir o número da conta do cliente, 
o limite de crédito, o novo saldo e a mensagem "Limite de Crédito Ultrapassado". */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int conta=0;
    float saldo, encargos, credito, limite, novosaldo; //variaveis

    while (conta != -1) //nao funcionou sozinho
    {
    printf ("\nInforme o numero da conta (-1 para terminar): ");
    scanf ("%d", &conta);
    
        if (conta == -1) // Se para conta o usuario digitar -1, encerra o while e imprime programa encerrado
        {
            break;
        }
        
    printf ("Informe o saldo inicial: ");
    scanf ("%f", &saldo);
    printf ("Informe o total de encargos: ");
    scanf ("%f", &encargos);
    printf ("Informe o total de creditos: ");
    scanf ("%f", &credito);
    printf ("Informe o limite de credito: ");
    scanf ("%f", &limite);
    
    novosaldo = saldo + encargos - credito; //calculo do novo saldo
    
        if (novosaldo > limite)
        {
            printf ("\nConta: %d", conta);
            printf ("\nLimite de Credito: R$ %.2f", limite);
            printf ("\nSaldo: R$ %.2f", novosaldo);
            printf ("\nLimite de crédito ultrapassado\n");
    
        }
    }
    printf ("Programa Encerrado");
    
return 0; 
}