#include "comparer_chaines.h"
#include <stdio.h>

int comparerChaines(const char s1, const char s2)
{
    int i = 0;
    while (s1[i] == s2[i])
    {
        if (s1[i] == '\0')
        {
            return 1;
        }
        i++;
    }
    return 0;
}