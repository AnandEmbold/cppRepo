#include <iostream>

int main() {
  int dog_age = 5; //my dog's age
  
  int early_years = 21;
  int later_years = (dog_age - 2) * 4;
  int human_years = early_years + later_years; // ikisin toplamı
  
  std::cout << "My name is noneofyourbusiness! Ruff ruff, I am " << human_years << " years old in human years.\n";
  
  return 0;
}
