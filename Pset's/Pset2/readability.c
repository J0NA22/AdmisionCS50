#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    //contador de letras
    int contador_letras = 0;
    //contador de palabras
    int contador_palabras = 1;
    //contador de oraciones
    int contador_oraciones = 0;

    string text = get_string("Text: ");

    int text_length = strlen(text);
    for (int i = 0; i < text_length; i++)
    {
        if (isalpha(text[i]))
        {
            contador_letras++;
        }
    }
    //printf("%i\n", contador_letras)

    for (int i = 0; i < text_length; i++)
    {
        if (isspace(text[i]))
        {
            contador_palabras++;
        }
    }
//  printf("%i\n", contador_palabras);
    for (int i = 0; i < text_length; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            contador_oraciones++;
        }
    }

    //calculo
    float calculation = (0.0588 * contador_letras / contador_palabras * 100) - (0.296 * contador_oraciones / contador_palabras * 100) - 15.8;

    //redondeo
    int index = round(calculation);

    //niveles de lectura
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}