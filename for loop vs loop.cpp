#include <iostream>
using namespace std;
int main() {
// using a for loop to print numbers 1 to 5
cout << "using for loop:" << endl;
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
cout << endl << endl;
// Doing the same thing with a while loop
cout << "using while loop:" << endl;
int j =1;
while (j <= 5) {
    cout << j << " ";
    j++;
}
cout << endl;
return 0;
}
