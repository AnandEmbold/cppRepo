#include <iostream>
#include "ufo_functions.hpp"

int main() {
  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;

  greet();
  
  
  while ((answer != codeword) && (misses < 7)) {
    
    end_game(answer, codeword);
    
    display_misses(misses);
    
    misses++;
  }

}


