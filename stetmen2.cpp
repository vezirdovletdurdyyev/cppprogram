#include <iostream>

using namespace std;

int main ()
{
   double number1;
   double number2;
   char op;
   cin >> number1;
   cin >> number2;
   cin >> op;
   switch (op) {
    case '+':
    cout << number1 + number2;
      break;
    case '-': 
    cout << number1 - number2;
      break;
    case '*':
    cout << number1 * number2;
      break;
      case '/':
    cout << number1 / number2;
      break;
   }
    int pause;
    cin >> pause;
    return 0;

}