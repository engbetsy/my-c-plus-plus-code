#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Do you want to play a game? (y/n):";
    char response = tolower(getchar());
    cout << "You entered: " << response << endl;
    if(response == 'y')
{
    cout << "Let's play a game, then...\n";
}
else if (response == 'n')
{
    cout << "Maybe next time. Goodbye.\n";
} else
{
    cout << "hmm...I don't understad.\n";
}
system("pause");
return 0;
}
