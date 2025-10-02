#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Do you want to play a game? (y/n):";
    string response;
    cin >> response;
    cout << "You entered: " << response << endl;
    if(tolower(response[0])== 'y') //yes
    {
        cout << "Let's play a game, then...\n";
    }
    system("pause");
    return 0;
}
