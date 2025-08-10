#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int number = 0;
    while ( number < 98 || number >100)
    {
        cout <<" Enter number : ";

        cin >> number;

        if (number < 98 || number >100)

          cout << " your sicret cod wrong"<< endl;
     }

           
    int pause;
    cin >> pause;
    return 0;
} 