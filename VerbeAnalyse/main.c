#include <stdio.h>
#include "string_operation.h"
#include "verbe_analyzer.h"

int main()
{
    char verbe[256];

    printf("Donner le verbe : ");
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

    printf("Le verbe %s est du groupe %d.", verbe, vrbgrp);

    return 0;

}