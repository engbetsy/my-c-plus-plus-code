#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
srand(time(0));   // seed random generator
int secret = rand() % 100 + 1; // Random number 1-100 int guess = 0;
cout << "Guess the number (1-100):";
while (guess != secret) { cin >> guess;

    if (guess < secret)
        cout << "Too low. Try again: ";
    else if (guess > secret)
        cout << "Too high. Try again: ";
    else
        cout << "you guessed it!"
        << endl;
}
return 0;
}
