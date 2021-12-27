#include "solver.h"

double Tokamak::getNu_l(double E)
{
    return sqrt(2 * E * E_VOLT / E_MASS);
}

double Tokamak::getLarmor(double E, double B)
{
    return (E_MASS * getNu_l(E)) / (E_VOLT * B);
}
