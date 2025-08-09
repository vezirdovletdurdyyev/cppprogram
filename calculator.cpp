#include <iostream>


using namespace std;

int main ()
{double number1;
    char result;
    double number2;

    cin >> number1 >> result >>number2;
    
   switch (result)
   {
      case '+':
      cout << number1 + number2 << endl; 
    break;
     case '-':
      cout << number1 - number2 << endl; 
    break;
      case '*':
      cout << number1 * number2 << endl; 
    break;
   
   default:
    case '/':
      cout << number1 / number2 << endl; 
   }

    int pause;
    cin >> pause;
    return 0;
} 