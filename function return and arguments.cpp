#include <iostream>
using namespace std;
// function that checks if the player has won
bool hasPlayerWon(int score) {if (score >= 100){
return true; // player wins if score is 100 or more
} else {
return false; //otherwise, not yet
    }
}
int main() {
int playerScore;
cout << "Enter your score: ";
cin >> playerScore;
// call the function
if (hasPlayerWon(playerScore)){
        cout << "you win the game!" << endl;
} else{
        cout << "keep playing, you haven't won yet." << endl;
        }
        return 0;
}
