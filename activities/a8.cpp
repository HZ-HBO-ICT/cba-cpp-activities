#include <iostream>
using namespace std;

int main() {
    string str;
    int vowels = 0;
    int consonants = 0;

    cout << "Enter a sentence or word: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        char c = tolower(str[i]); 
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++; 
        } 
        else { 
            consonants++;
        } 
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    
    return 0;
}