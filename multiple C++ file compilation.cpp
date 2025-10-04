#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Function to check if the guess is correct
bool checkGuess(int guess, int secret)
{
    return guess == secret;
}
int main() {
srand(time(0)); // seed random number generator
char playAgain = 'y';
while (playAgain == 'y'){
    int secretNumber = rand() % 100 + 1; // random number 1-100
    int guess;
    cout << "Guess the number (1-100):" << endl;
    // Loop until the user guesses correctly
    do {
        cout << "Enter your guess:";
        cin >> guess;
        if (!checkGuess(guess,secretNumber)) {
            if (guess < secretNumber)
                cout << "Too low. Try again." << endl;
            else
                cout << "Too high. Try again." << endl;
        }
    } while (!checkGuess(guess, secretNumber));
    cout << "correct! you guessed it!" << endl;
    cout << "play again? (y/n):";
    cin >> playAgain;
}
cout << "Thanks for playing!" << endl;
return 0;
        }


