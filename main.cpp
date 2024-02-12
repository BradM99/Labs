#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring> // for strlen

using namespace std;

int main(int argc, const char * argv[]) {
    int targetWordNumber;
    const char* wordList[5];
    wordList[0] = "test";
    wordList[1] = "apple";
    wordList[2] = "car";
    wordList[3] = "crash";
    wordList[4] = "tired";
    const char* alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    // Seed the random number generator with the current time
    srand(time(nullptr));

    int wordNumber = rand() % 5; // Generate a random number between 0 and 4
    const char* chosenWord = wordList[wordNumber];
    int wordLength = strlen(chosenWord);

    // Allocate memory for the blank word filled with dashes
    char* pBlankWord = (char*)malloc((wordLength + 1) * sizeof(char)); 

    // Fill the blank word with dashes
    for(int i = 0; i < wordLength; i++) {
        pBlankWord[i] = '-';
    }
    pBlankWord[wordLength] = '\0';
    
    cout << pBlankWord << endl;

    return 0;
}