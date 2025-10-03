#include <iostream>
#include <string>
using namespace std;
int main ()
{
    cout << "Let,s play a game, then...\n";
    cout << "What difficulty? (easy/medium/hard):";
    string difficulty;
    cin >> difficulty;
    if (difficulty == "easy" ||
    difficulty == "Easy")
    {
        cout <<"ezpz lemon squeezy\n";
}
else if (difficulty == "medium" ||difficulty == "medium")
{
    cout << "Not too hard, not too easy!\n";
}
else if (difficulty == "hard" || difficulty == "Hard")
{
    cout << "This will be tough!\n";
}
else
{
    cout << "invalid choice!\n";
}
// Ask if the player wants to continue
cout << "Do you want to play again? (y/n):";
string response;
cin >> response;
if(response == "n" || response == "N")
{
    cout << "Maybe next time. Goodbye.\n";
}
system("pause");
return 0;
}


