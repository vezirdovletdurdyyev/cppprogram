#include <iostream>

using namespace std;

int main ()
{
   while (true) {
    int number;
    cin >> number;
    if ( number > 1  &&  number < 5)
    break;
    else
    cout << "error your nmber"<< endl;
      break;
   }
    int pause;
    cin >> pause;
    return 0;

}