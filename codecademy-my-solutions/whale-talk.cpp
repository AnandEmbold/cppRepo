
#include <iostream>
#include <vector>
#include <string>

int main () {
  std::string phrase = "tur,KJUYOPi!+nez and, turtle.i.s";
  std::vector<char> vowels = {'a','e', 'i', 'o', 'u', 'A','E', 'I', 'O', 'U'};
  std::vector<char> result;
  
  for (int i = 0; i < phrase.size(); i++) {
    
    for (int j = 0; j < vowels.size(); j++) {
      
      if (phrase[i] == vowels[j]) {
        result.push_back(phrase[i]);
      }
      
    }
    
    if ((phrase[i] == 'e') || (phrase[i] == 'u') || (phrase[i] == 'E') || (phrase[i] == 'U') || (ispunct(phrase[i]))) {
      result.push_back(phrase[i]);
      
      if (phrase[i] == '!') {
        result.push_back(phrase[i]);
      }
      
    }
    
  }
  
  for (int k = 0; k < result.size(); k++) {
    std::cout << result[k];
  }
  
}


