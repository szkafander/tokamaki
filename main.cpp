#include "source/Solver/solver.h"

using namespace std;

int main()
{
    Tokamak tokamaki;

    double electronVolt = 10E3;
    double magneticField = 5E-5;
    
    cout << tokamaki.getLarmor(electronVolt, magneticField) << endl;

    return 0;
};