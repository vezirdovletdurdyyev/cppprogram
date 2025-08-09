#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    
    int number;
    cout << "write number : ";
    cin >> number;
    if (number < 0)
    cout << "error";
    else {
   
        int number1 = 1;
          for (int  i = 1; i <= number; i++)
             number1 *= i;
          cout << "progression " << number << " : " << number1;
    }
    int pause;
    cin >> pause;
    return 0;
}