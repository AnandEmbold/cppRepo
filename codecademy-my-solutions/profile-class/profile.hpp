#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Profile {
private:
  string name;
  int age;
  string city;
  string country;
  string pronouns;
  vector<string> hobbies;

public:
  Profile(string v_name, int v_age, string v_city, string v_country, string v_pronouns = "they/them");
  
    void setHobbies(string v_hobby);
  void viewProfile();
  void addHobbies();
  void createNewProfile();
};
