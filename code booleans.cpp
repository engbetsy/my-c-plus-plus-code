#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Let,s play a game, then...\n";
    cout << "What difficulty? (easy/medium/hard):";
    string difficulty;
    cin >> difficulty;
    bool isEasy =(difficulty == "easy" || difficulty == "Easy");
    bool isMedium =(difficulty == "medium" || difficulty == "Medium");
    bool isHard =(difficulty == "hard" || difficulty == "Hard");
    if (isEasy)
        cout << "ezpz lemon squeezy\n";
    else if (isMedium)
        cout << "Not too hard, not too easy!\n";
        else if (isHard)
        cout << "invalid choice!\n";
    cout << "Do you want to play again?(y/n):";
    string response;
    cin >> response;
    bool quit =(response == "n" ||
                response == "N");
    if (quit)
        cout << "Maybe next time. Goodbye.\n";
    system("pause");
    return 0;
}
