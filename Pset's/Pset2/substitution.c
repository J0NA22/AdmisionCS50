#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //entrada de la llave
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    //longitud
    int Longitud_argv = strlen(argv[1]);

    //validacion de la longitud
    if (Longitud_argv != 26)
    {
        printf("La clave debe ser hasta 26\n");
        return 1;
    }

    //la llave debe ser alfabeto y no estar repetida
    for (int i = 0; i < Longitud_argv; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Todas las claves deben ser un alfabeto\n");
            return 1;
        }
        for (int j = i + 1; j < Longitud_argv; j++)
        {
            if (argv[1][i] == argv[1][j])
            {
                printf("La clave no debe contener letras repetidas");
                return 1;
            }
        }
    }
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    //longitud del texto
    int plaintext_length = strlen(plaintext);

    //cifrado
    for (int i = 0; i < plaintext_length; i++)
    {
        if (isupper(plaintext[i]))
        {
            printf("%c", toupper(argv[1][plaintext[i] - 65]));
        }
        else if (islower(plaintext[i]))
        {
            printf("%c", tolower(argv[1][plaintext[i] - 97]));
        }
        else
        {
            printf("%c", plaintext[i]);
        }

    }
    printf("\n");

}