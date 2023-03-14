//  This program will ask for user input in the form of a sentence. The sentenced will then
//  be processed and the number of vowels in the string will be output.
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
    int numOfVowels = 0;
    cout << "Enter a sentence and then press enter:" << endl;
    while(character != '\n') {
        cin.get(character);
        if(isVowel(character)) {
            numOfVowels += 1;
        }
    }
    
      //  cout << character << endl;
    
    //make sure english grammar is correct by using the sigular form of "is" for one vowel, "are" for more than one
    if(numOfVowels == 1) {
        cout << "There is " << numOfVowels << " vowel." << endl;
    }
    else {
        cout << "There are " << numOfVowels << " vowels in this sentence." << endl;
    }
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
