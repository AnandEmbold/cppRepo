#include <string>
#include <iostream>
#include <vector>
#include "profile.hpp"
using namespace std;

Profile::Profile(string v_name, int v_age, string v_city, string v_country, string v_pronouns = "they/them") {
  name = v_name;
  age = v_age;
  city = v_city;
  country = v_country;
  pronouns = v_pronouns;
}

void Profile::viewProfile() {
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "City: " << city << endl;
  cout << "Country: " << country << endl;
  cout << "Pronouns: " << pronouns << endl;
  
  cout << "Hobbies: ";

  for (int i = 0; i < hobbies.size(); i++) {
    cout << " " << hobbies[i] << endl;
  }
  
}

void Profile::setHobbies(string v_hobby) {
    hobbies.push_back(v_hobby);
}




