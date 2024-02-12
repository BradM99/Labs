#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

int main(int argc, const char * argv[]) {
    const char* wordList[5];
    wordList[0] = "test";
    wordList[1] = "apple";
    wordList[2] = "car";
    wordList[3] = "crash";
    wordList[4] = "tired";
    const char* alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    // Seed the random number generator with the current time
    std::default_random_engine generator(time(nullptr));

    // Define the distribution
    std::uniform_int_distribution<int> distribution(0, 4);
    int wordNumber = distribution(generator);
    const char* chosenWord = wordList[wordNumber];
    string word = chosenWord;
    
    for(int i = 0; i< word.length(); i++){
        cout << "-";
    }
    printf("\n");
    
    //cout << word << "\nlength: " << word.length() << endl;
}