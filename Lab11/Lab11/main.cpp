//
//  main.cpp
//  Lab11
//
//  Created by Gilbert W. Sanborn Jr on 3/9/23.
//

#include <iostream>
#include <string>
using namespace std;


string name;
char character; //reads in character by character
bool vowelOrNot; //is it a vowel or not?

bool isVowel(char letter);
int main() {
    string name;
    char character; //reads in character by character
    bool vowOrNot; //is it a vowel or not?
    int numOfVowels = 0;
    cout << "Enter a sentence and then press enter:" << endl;
    /*cin.get(character);
    cout << character << endl;
    cout << name << endl;*/

    while(cin.get(character)) {
        if(isVowel(character)) {
            numOfVowels += 1;
        }
        cout << character << endl;
    }
    cout << numOfVowels << endl;
    
    vowOrNot = isVowel(character);
    //cout << vowOrNot;
    return 0;
}

bool isVowel(char letter)
{
    if(letter == 'A' || letter == 'a' || letter == 'E' || letter == 'e' || letter == 'I' || letter == 'i' || letter == 'O' || letter == 'o' || letter == 'U' || letter == 'u') {
        vowelOrNot = true;
    }
    else{
        vowelOrNot = false;
    }
    return vowelOrNot;
}
