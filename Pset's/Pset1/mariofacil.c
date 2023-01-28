#include <cs50.h>
#include <stdio.h>

int main(void)
{
     int altura = 0;

    do
    {
        altura = get_int("Ingresa el tamano de la escalera: \n");
    }
    while (altura <= 1 || altura >= 8); //Se verifica que el numero ingresado por el usuario sea <8 y >1

    //Impresion de la escalera
    for (int i = 0; i < altura; i++)
    {
        //espacios
        for (int espacios = i + 1; espacios < altura; espacios++)
        {
            printf(" ");
        }
        //#
        for (int hash = altura + i + 1; hash > altura; hash--)
        {
            printf("#");
        }
        
        printf("\n");
    }
    return 0;
}