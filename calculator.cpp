#include <iostream>


using namespace std;

int main ()
{
   double number1;
   cin >> number1;
   double number2;
   cin >> number2;
   double result = (number1 >number2) ? number1 : number2;
   cout << result;

    int pause;
    cin >> pause;
    return 0;
} 