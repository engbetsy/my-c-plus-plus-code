#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Do you want to read a book?(y/n)";
    string response;
    cin >> response;
    cout << "you entered: " << response << endl;
    if(response == "y")
    {
        cout << "Let's read a book, then...\n";
    }
        system("pause");
        return 0;

}
