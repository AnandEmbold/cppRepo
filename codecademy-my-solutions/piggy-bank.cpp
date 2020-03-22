
#include <iostream>

int main() {
  double pesos, reais, soles;
  double dollars;
  
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  
  std::cout << "Enter number of Brazilian Reasis: ";
  std::cin >> reais;
  
  std::cout << "Enter number of Peru Soles: ";
  std::cin >> soles;
  
  //converting to USD
  
  /*
  1 peso = 0.05
  1 reasis = 0.23
  1 soles = 0.28
  */
  
  dollars = (pesos * 0.05) + (reais * 0.23) + (soles * 0.28);
  
  std::cout << "US Dollars = $" << dollars;
  
  
}
