#include "comparer_chaines.h"
#include <stdio.h>

int comparerChaines(const char* verbe, const char* verbesIreguliers)
{
    int i = 0;
    while (verbe[i] == verbesIreguliers[i])
    {
        if (verbe[i] == '\0')
        {
            return 1;
        }
        i++;
    }
    return 0;
}