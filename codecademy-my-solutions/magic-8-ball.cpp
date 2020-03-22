#include <iostream>
#include<cstdlib>

int main () {
  srand (time(NULL));
  std::cout << "MAGIC 8-BALL:";
  
  int answer = std::rand() % 10;
  
  if (answer == 0) {
    std::cout << "It is certain.\n";
} else if (answer == 1) {
    std::cout << "It is decidedly so.\n";
  } else if (answer == 2) {
    std::cout << "Without a doubt.\n";
  } else if (answer == 3) {
    std::cout << "Yes - definitely.\n";
  } else if (answer == 4) {
    std::cout << "You may rely on it.\n";
  } else if (answer == 5) {
    std::cout << "As I see it, yes.\n";
  } else if (answer == 6) {
    std::cout << "Most likely.\n";
  } else if (answer == 7) {
    std::cout << "Yes.\n";
  } else if (answer == 8) {
    std::cout << "Signs point to yes.\n";
  } else {
    std::cout << "Reply hazy, try again.\n";
  }
  
}
