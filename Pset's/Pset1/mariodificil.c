#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura = 0;
    
    do
    {
        altura = get_int("Ingresa el tamano de la escaleras: \n");
    }
    while (altura <= 1 || altura >= 8); //Se verifica que el numero ingresado por el usuario sea <8 y >1

    //impresion de la escalera
    for (int i = 0; i < altura; i++)
    {
        //impresion de espacios
        for (int espacios = i + 1; espacios < altura; espacios++)
        {
            printf(" ");
        }
        //impresion de #
        for (int hash = altura + i + 1; hash > altura; hash--)
        {
            printf("#");
        }
        //impresion de los espacios entre las dos escalerass
        printf("  ");
        //la segunda escalera de #
        for (int hash = altura + i + 1; hash > altura; hash --)
        {
            printf("#");
        }
        
        printf("\n");
    }
    return 0;
}