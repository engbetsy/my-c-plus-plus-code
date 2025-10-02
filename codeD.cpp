#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Do you want to play a game?(y/n):";
    int response;
    response = getchar();
    cout << "You entered:" << static_cast<char>(response) << endl;
    if(tolower(response) == 'y') //yes
    {
        cout << "Let's play a game, then...\n";
    }
    system("pause");
    return 0;
}
