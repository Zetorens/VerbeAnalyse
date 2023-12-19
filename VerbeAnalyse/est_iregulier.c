#include "est_iregulier.h"
#include "comparer_chaines.h"

int estIregulier(const char* verbe, char* verbesIreguliers[]) {
    for (int i = 0; verbesIreguliers[i] != NULL; i++) {
        if (comparerChaines(verbe, verbesIreguliers[i])) {
            return 1;
        }
    }
    return 0;
}