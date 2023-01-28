
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long n = get_long("Introduxca el numero de la tarjeta: ");

    int i = 0;
    long num_tarjeta = n;

    //cuento de la longitud
    while (num_tarjeta > 0)
    {
        num_tarjeta = num_tarjeta / 10;
        i++;
    }
    //longitud de la tarjeta
    if (i != 13 && i != 15 && i != 16)
    {
        printf("INVALIDO\n");
        return 0;
    }
    int sum1 = 0;
    int sum2 = 0;
    int mod1 = 0;
    int mod2 = 0;
    int d1 = 0;
    int d2 = 0;
    int total = 0;
    long x = n;

    do
    {
        //quitar el ultimo digito y añadirlo a sum1
        mod1 = x % 10;
        x = x / 10;
        sum1 = sum1 + mod1;

        // quitar el penultimo digito
        mod2 = x % 10;
        x = x / 10;

        //duplicar el penultimo digito añadirlo a sum2
        mod2 = mod2 * 2;
        d1 = mod2 % 10;
        d2 = mod2 / 10;
        sum2 = sum2 + d1 + d2;

    }
    while (x > 0);

    total = sum1 + sum2;

    //Verificacion con algoritmo Luhn
    if (total % 10 != 0)
    {
        printf("INVALIDO\n");
        return 0;
    }
    long start = n;
    //identificar los digitos de inicio
    do
    {
        start =  start / 10;
    }
    while (start > 100);

    //Verificacion de las tarjetas
    if ((start / 10 == 5) && (0 < start % 10 && start % 10 < 6))
    {
        printf(" TARJETA MASTERCARD\n");
    }
    else if ((start / 10 == 3) && (start % 10 == 4 || start % 10 == 7))
    {
        printf("TARJETA AMEX\n");
    }
    else if (start / 10 == 4)
    {
        printf("TARJETA VISA\n");
    }
    // si no es ninguna
    else
    {
        printf("INVALIDO\n");
    }
    return 0;
}