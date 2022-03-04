#ifndef Options01_h
#define Options01_h

//entrada e display dos dados da Opções
int getData(int& N, double& K);

//precificando Opcoes Europeias
double precoPorCRR(double S0, double U, double D, double R, int N, double K);

//computando call payoff
double callPayoff(double z, double K);

#endif