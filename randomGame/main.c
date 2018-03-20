#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 100, MIN = 1;
    int nombreChoisi = 0;

    srand(time(NULL));
    int nombreRandom = (rand() % (MAX - MIN + 1)) + MIN;

    printf("le nombre mystere a ete choisi. cest:  %d\n", nombreRandom);
    printf("Veuillez choisir votre nombre :\n");

    scanf("%d", &nombreChoisi);

    while (nombreChoisi != nombreRandom)
    {
        if (nombreChoisi > nombreRandom )
        {
            printf ("trop haut !\n Essayez encore !\n");
            scanf("%d", &nombreChoisi);
        } else if (nombreChoisi < nombreRandom)
        {
            printf("Trop bas !\n Essayez encore !\n");
            scanf("%d", &nombreChoisi);
        }
    }

    if (nombreChoisi == nombreRandom)
    {
        printf("Felicitations ! Vous avez trouve le nombre !");
    }

    return 0;
}
