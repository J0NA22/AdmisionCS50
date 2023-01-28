#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int cal_quarters(int cents);
int calculate(int cents);
int cal_nickels(int cents);
int cal_pennies(int cents);

int main(void)
{
    // Centavos a pagar al cliente
    int cents = get_cents();

    // Se calcula la centidad de quarters para el cliente
    int quarters = cal_quarters(cents);
    cents = cents - quarters * 25;

    // Se calcula la centidad de dimes para el cliente
    int dimes = cal_dimes(cents);
    cents = cents - dimes * 10;

    // Se calcula la centidad de nickles para el cliente
    int nickels = cal_nickels(cents);
    cents = cents - nickels * 5;

    // Se calcula la centidad de pennies para el cliente
    int pennies = cal_pennies(cents);
    cents = cents - pennies * 1;

    // Suma de las monedas 
    int coins = quarters + dimes + nickels + pennies;

    // Numero total de monedas para el cliente
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int cents = 0;
    do
    {
        cents = get_int("Ingrese la cantidad de dinero: ");
    }
    while (cents < 0);
    return cents;
}

int cal_quarters(int cents)
{
    // TODO
    int quarters = 0;

    // mientras que los centavos sean mayor o igual a 25
    while (cents >= 25)
    {
        cents = cents - 25;
        //aumenta el contador para guardar la cantidad de monedas de 25 a entregar
        quarters++;
    }
    return quarters;
}

int cal_dimes(int cents)
{
    // TODO
    int dimes = 0;
    //mientras los centavos sean mayor o igual a 10
    while (cents >= 10)
    {
        cents = cents - 10;
        //aumenta el contador para guardar la cantidad de monedas de 10 a entregar
        dimes++;
    }
    return dimes;
}

int cal_nickels(int cents)
{
    // TODO
    int nickels = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        //aumenta el contador para guardar la cantidad de monedas de 5 a entregar
        nickels++;
    }
    return nickels;
}

int cal_pennies(int cents)
{
    // TODO
    int pennies = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        //aumenta el contador para guardar la cantidad de monedas de 1 a entregar
        pennies++;
    }
    return pennies;
}