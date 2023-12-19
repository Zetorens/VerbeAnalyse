#include "string_operation.h"
#include <stdio.h>

int length(const char* verbe)
{
    int count = 0;
    while (verbe[count] != '\0')
    {
        count++;
    }
    return count;
}