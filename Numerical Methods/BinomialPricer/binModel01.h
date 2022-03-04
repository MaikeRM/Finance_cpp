#ifndef binModel01_h
#define binModel01_h

int getData(double& S0, double& U, double& D, double& R, int& n, int& i);
double riskNeutral(double U, double D, double R);
double S(double S0, double U, double D, int n, int i);
void lines();

#endif