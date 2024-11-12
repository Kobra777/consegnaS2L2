#include <stdio.h>

void leggiNumero(float *valore, const char *stringa);
float moltiplicaValori(float valore1, float valore2);
float calcolaMedia(float valore1, float valore2);

int main()
{
    float primoNumero;
    float secondoNumero;
    float risultato;
    float media;

    leggiNumero(&primoNumero, "inserisci il primo valore");
    leggiNumero(&secondoNumero, "inserisci il secondo valore");
    risultato = moltiplicaValori(primoNumero, secondoNumero);
    printf("RISULTATO MOLTIPLICAZIONE: %f\n", risultato);
    media = calcolaMedia(primoNumero, secondoNumero);
    printf("-------------------------\n");
    printf("RISULTATO MEDIA: %f\n", media);
    return 0;
}

#include <stdio.h>

void leggiNumero(float *valore, const char *stringa)
{
    int risultato;

    do
    {
        printf("%s\n", stringa);
        risultato = scanf("%f", valore);

        if (risultato != 1)
        {
            printf("ERRORE!! Inserisci un valore numerico valido.\n");
            while (getchar() != '\n')
                ;
        }

    } while (risultato != 1);
}

float moltiplicaValori(float valore1, float valore2)
{
    return valore1 * valore2;
}

float calcolaMedia(float valore1, float valore2)
{
    return (valore1 + valore2) / 2;
}