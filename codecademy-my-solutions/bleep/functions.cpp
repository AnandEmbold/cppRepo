#include "functions.hpp"
#include <string>
#include <iostream>
using namespace std;

void bleep(string v_word, string &v_text) {
    
    for (int i = 0; i < v_text.length(); i++) {
        
        int count = 0;
        
        for (int j = 0; j < v_word.length(); j++) {
            
            if (v_text[i+j] == v_word[j]) {
                count++;
            }
            
            if (count == v_word.length()) {
                for (int k = 0; k < v_word.size(); k++) {
                    v_text[i+k] = '*';
                }
            }
            
        }

        
    }
    
}

void printText(string v_text) {
    for (int i = 0; i < v_text.length(); i++) {
        std::cout << v_text[i];
    }
}
