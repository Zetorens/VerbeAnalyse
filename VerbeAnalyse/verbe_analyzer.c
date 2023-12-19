#include "verbe_analyzer.h"
#include <stdio.h>

int getGroup(const char* verbe, int vrbLength)
{
    char terminaison[5] = { verbe[vrbLength - 3], verbe[vrbLength - 2], verbe[vrbLength - 1] };

    if (terminaison[0] == 'o' && terminaison[1] == 'i' && terminaison[2] == 'r')
    {
        return 3;
    }
    else if (terminaison[1] == 'r' && terminaison[2] == 'e')
    {
        return 3;
    }
    else if (terminaison[1] == 'i' && terminaison[2] == 'r')
    {
        return 2;
    }
    else if (terminaison[1] == 'e' && terminaison[2] == 'r')
    {
        return 1;
    }
    return -1;
}