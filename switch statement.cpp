#include <iostream>
using namespace std;
int main()
{
    cout << "Let's play a game, then...\n";
    cout << "What difficulty? (e = easy / m = medium / h = hard): ";
    char difficulty;
    cin >> difficulty;
    switch (difficulty)
    {
    case 'e':
    case 'E':
        cout << "ezpz lemon squeezy\n";
        break;
    case 'm':
    case  'M':
        cout << "Not too hard, not too easy!\n";
        break;
    case 'h':
    case 'H':
        cout << "This will be tough!\n";
                break;
    default:
        cout << "invalid choice!\n";
    }
    cout << "Do you want to play again? (y/n):";
    char response;
    cin >> response;
    switch (response)
    {
    case 'n':
    case 'N':
        cout << "Maybe next time. Goodbye.\n";
        break;
    case 'y':
    case 'Y':
        cout << "Great! let's go again!\n";
        break;
    default:
        cout << "invalid response!\n";
    }
    system("pause");
    return 0;
    }


