#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
//Initialize random seed
  srand(time(0));
  // Generate a random number between 1 and 100
  int secretNumber = rand() % 100 + 1;
  int userGuess = 0;
  int attempts = 0;
  cout << "Welcome to the Guessing Game!" << endl;
  cout << "l have selected a number between 1 and 100." << endl;
  cout << "Try to guess it!" << endl;
  // Start the guessing loop
  while (userGuess != secretNumber) {
    cout << "Enter your guess:";
    cin >> userGuess;
    attempts++;
    if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
    } else{
    cout << "congratulations! you've guessed the number in " <<
    attempts << "attempts." << endl;
    }
    }
    return 0;
  }

