#include <stdio.h>
#include "string_operation.h"
#include "verbe_analyzer.h"
#include "comparer_chaines.h"
#include "est_iregulier.h"

int main()
{
    char verbe[256];

    char* verbesIreguliers[] =
    {
        "Etre", "Avoir", "Aller", "Faire", "Dire", "Pouvoir", "Vouloir",
        "Venir", "Voir", "Savoir", "Falloir", "Pleuvoir", "Devoir", "Recevoir",
        "Tenir", "Mettre", "Envoyer", "Prendre", "Partir", "Dormir", "Sortir",
        "Lire", "Courir", "Mourir", "Ouvrir", "Ecrire", "Conduire", "Boire",
        "Choisir", "Connaitre", "Croire", "Voir", "Asseoir", "Battre", "Peindre",
        "Craindre", "Atteindre", "Joindre", "Contraindre", "Acquerir",
        "S'asseoir", "Savoir", "Cueillir", "Couvrir", "Decevoir", "Ecrire",
        "Inscrire", "Mentir", "Offrir", "Ouvrir", "Plaire", "Rire", "Suivre",
        "Vivre", NULL
    };

    printf("Donnez le verbe avec la 1er lettre en Majuscule : ");
    if (scanf("%s", verbe) != 1)
    {
        printf("Impossible d'attribuer le verbe dans le tableau.");
        return -1;
    }

    int vrbLength = length(verbe);

    int vrbgrp = getGroup(verbe, vrbLength);

    if (vrbgrp == -1)
    {
        printf("Erreur : Votre mot n'est pas un verbe.");
        return -1;
    }

    if (estIregulier(verbe, verbesIreguliers)) {
        printf("Le verbe '%s' est irrégulier. Il est donc dans le groupe 3.", verbe);
    }
    else {
        printf("Le verbe %s est du groupe %d.", verbe, vrbgrp);
    }

    return 0;
}