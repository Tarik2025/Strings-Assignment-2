#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string lexicographicallyMaximumWord(const string& sentence) {
    stringstream ss(sentence);
    string word;
    string maxWord;

    // Read the first word and assign it as the initial maxWord
    ss >> maxWord;

    // Compare subsequent words with the maxWord
    while (ss >> word) {
        if (word > maxWord) {
            maxWord = word;
        }
    }

    return maxWord;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string maxWord = lexicographicallyMaximumWord(sentence);
    cout << "The lexicographically maximum word is: " << maxWord << endl;

    return 0;
}
