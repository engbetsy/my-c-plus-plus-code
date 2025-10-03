#include <iostream>
#include <string>
using namespace std;
// function prototypes
void checkDifficulty(string difficulty);
void checkResponse(string response);
int main()
{
    cout << "Let's play a game,then...\n";
    cout <<  "What difficulty? (easy/medium/hard):";
    string difficulty;
    cin >> difficulty;
    checkDifficulty(difficulty);  // function call
    cout << "Do you want to play again? (y/n):";
    string response;
    cin >> response;
    checkResponse(response); // function call
    system("pause");
    return 0;
}
// Function definitions
void checkDifficulty(string difficulty)
{
    if (difficulty == "easy" || difficulty == "Easy")
        cout << "ezpz lemon squeezy\n";
    else if (difficulty == "medium" || difficulty == "Medium")
        cout << "Not too hard, not too easy!\n";
    else if (difficulty == "hard" || difficulty == "Hard")
        cout << "This will be tough!\n";
    else
        cout << "invalid choice!\n";
}
void checkResponse(string response)
{
    if (response == "n" || response == "N")
    {
        cout << "Maybe next time. Goodbye.\n";

            cout << "Great! Let's go again!\n";

            cout << "invalid response!\n";

    }
}


