#include <iostream>

int main() {
  
  // VARIABLES:
  
  int gryffindor = 0, hufflepuff = 0, ravenclaw = 0, slytherin = 0;
  int answer1, answer2, answer3, answer4;
  int max = 0;
  std::string house;
  
  std::cout << "The Sorting Hat Quiz!\n";
  
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n" << "1) The Good\n2) The Great\n3) The Wise\n4) The Bold\n";
  std::cin >> answer1;
  
  if (answer1 == 1) {
    hufflepuff++;
  } else if (answer1 == 2) {
    slytherin++;
  } else if (answer1 == 3) {
    ravenclaw++;
  } else if (answer1 == 4) {
    gryffindor++;
  } else {
    std::cout << "Invalid input\n";
  }
  
  std::cout << "Q2) Dawn or Dusk?\n\n1) Dawn\n2) Dusk";
  std::cin >> answer2;
  
  if (answer2 == 1) {
    gryffindor++;
  } else if (answer2 == 2) {
    slytherin++;
  } else {
    std::cout << "Invalid input";
  }
  
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n" << "1) The violin\n2) The trumpet\n3) The piano\n4) The drum";
  std::cin >> answer3;
  
    if (answer3 == 1) {
    slytherin++;
  } else if (answer3 == 2) {
    hufflepuff++;
  } else if (answer3 == 3) {
    ravenclaw++;
  } else if (answer3 == 4) {
    gryffindor++;
  } else {
    std::cout << "Invalid input\n";
  }
  
  std::cout << "Q4) Which road tempts you most?\n\n" << "1) The wide, sunny grassy lane\n2) The narrow, dark, lantern-lit alley\n3) The twisting, leaf-strewn path through woods\n4) The cobbled street lined (ancient buildings)";
  std::cin >> answer4;
  
    if (answer4 == 1) {
    hufflepuff++;
  } else if (answer4 == 2) {
    slytherin++;
  } else if (answer4 == 3) {
    gryffindor++;
  } else if (answer4 == 4) {
    ravenclaw++;
  } else {
    std::cout << "Invalid input\n";
  }
  
  if (gryffindor > max) {
    max = gryffindor;
    house = "Gyrffindor";
  }
  
  if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";

}

if (ravenclaw > max) {

  max = ravenclaw;
  house = "Ravenclaw";

}

if (slytherin > max) {

  max = slytherin;
  house = "Slytherin";

}

std::cout << house << "!\n";
  
  
}
