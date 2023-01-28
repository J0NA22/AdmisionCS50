#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //solicita el nombre del usuario 
    string usuario = get_string("Ingrese su nombre de usuario: ");

    //imprime el saludo para el usuario 
    printf("Hola %s/n Este es tu primer Hola Mundo\n", usuario);
}


/*

//En caso de que lo quieran de la manera tradicional seria:

#include <cs50.h>
#include <stdio.h>

int main(void)
{

    printf("Hola, Mundo :D\n");

}

*/
