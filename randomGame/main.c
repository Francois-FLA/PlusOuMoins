#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    int nombreChoisi = 0, continueGame = 1, nombreRandom = 0, nombreEssais = 0, max = 100;

    srand(time(NULL));
    nombreRandom = (rand() % (max - MIN + 1)) + MIN;

printf("Veuilly choisir la difficulte :\n 1. Entre 1 et 100\n 2. Entre 1 et 1000\n 3. Entre 1 et 10000\n");
    scanf("%d", &max);

    switch (max)
    {
    case 1 :
        max = 100;
        printf("La difficulte choisie est de 100\n");
        break;
    case 2 :
        max = 1000;
        printf("La difficulte choisie est de 1000\n");
        break;
    case 3 :
        max = 10000;
        printf("La difficulte choisie est de 10000\n");
        break;
    default :
        max = 100;
        printf("La difficulte choisie est de 100\n");
        break;
    }

    do
        {

            printf("le nombre mystere a ete choisi. cest:  %d\n", nombreRandom);
            printf("Veuillez choisir votre nombre :\n");

            scanf("%d", &nombreChoisi);
            nombreEssais++;

            if (nombreChoisi > nombreRandom )
            {
                    printf ("trop haut !\n Essayez encore !\n");
            }
                else if (nombreChoisi < nombreRandom)
            {
                    printf("Trop bas !\n Essayez encore !\n");
            }
                else if (nombreChoisi == nombreRandom)
            {
                    printf("Felicitations ! Vous avez trouve le nombre !\n Vous avez fait %d essais ! \n Voulez-vous continuer ?\n", nombreEssais);
                    scanf("%d", &continueGame);
                    if (continueGame == 1) {
                        nombreRandom = (rand() % (max - MIN + 1)) + MIN;
                        nombreEssais = 0;
                    }
            }

        } while (continueGame == 1);

    return 0;
}
