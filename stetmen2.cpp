#include <iostream>

using namespace std;

int main ()
{
    double number1;
    double number2;
   cin >> number1; 
   cin >> number2;
   double commision = (number1 > number2)  ? number1 : number2;
   cout << commision;

    int pause;
    cin >> pause;
    return 0;

}