#include "play.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  std::cout << "Press [Enter] to begin: ";
  std::cin.ignore();

  getPlayers();

  drawBoard();

  play();

  return 0;
}
