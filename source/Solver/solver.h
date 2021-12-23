#pragma once
#ifndef SOLVER_H
#define SOLVER_H

#include <iostream>
#include <cmath>
#include <vector>

#define E_MASS 0.91E-30
#define E_VOLT 1.60E-19

class Tokamak
{
    public:
        double getNu_l(double E);
        double getLarmor(double E, double B);
};


#endif