#include <iostream>

using namespace std;

int main ()
{
    int selese;
   cin >> selese;
   double commision = (selese > 1000)  ? .1 : .05;
   cout << commision;

    int pause;
    cin >> pause;
    return 0;

}