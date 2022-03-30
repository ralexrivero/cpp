#include "main.h"

/**
 * iva: return the value and type of I.V.A.
 *
 * @value: value to calculate the given IVA
 * @ivaType: 0 (Basic, 23%), 1 (Minimal, 10%), 2 (Excent, 0%)
 * @return iva float value
 */

float iva(float value, int ivaType) {
    float iva = 0;

    if (ivaType == 0)
    {
        iva = 0.23;
    }
    else if (ivaType == 1)
    {
        iva = 0.1;
    }
    else
    {
        return (0);
    }

    return (value * iva);
}