#include <iostream>
#include <vector>
#include <string>

using namespace std;

class MultiWordInput {
private:
    vector<string> words;

public:
    void addWord(const string &word) {
        words.push_back(word);
    }

    void displayWords() {
         cout << "List of words:" <<  endl;
        for (const  string &word : words) {
             cout << "- " << word <<  endl;
        }
    }
};

int main() {
    MultiWordInput inputHandler;

    // Taking input for multiple words
    int numWords;
     cout << "Enter the number of words: ";
     cin >> numWords;

     cin.ignore(); // Clear the newline character from previous input

    for (int i = 0; i < numWords; ++i) {
         string word;
         cout << "Enter word " << i + 1 << ": ";
         getline( cin, word);
        inputHandler.addWord(word);
    }

    // Display the entered words
    inputHandler.displayWords();

    return 0;
}
