#include <iostream>
using namespace std;
int main() {
cout << "Welcome to the Guess countdown Game!" << endl;
// We'll give the player 5 guesses
int secretNumber = 3; // fixed for demonstration
// Decrementing for loop: guesses go from 5 down to 1
for (int guessesLeft = 5;
guessesLeft > 0; guessesLeft--) {
int userGuess;
cout << "you have " <<
guessesLeft << " guesses left. Enter your guess (1-5): ";
 cin >> userGuess;
 if (userGuess == secretNumber)
    {
        cout << "Correct! you guessed it!" << endl;
        break; // exit the loop if correct
        } else {
        cout << "Wrong guess." <<
        endl;
        }
        if (guessesLeft == 1) {
            cout << "Game over! The secret number was " << secretNumber << "." << endl;
        }
 }
 cout << "Thanks for playing!" <<
 endl;
 return 0;
}
