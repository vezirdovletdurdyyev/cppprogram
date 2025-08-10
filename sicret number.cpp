#include<iostream>
#include<cmath>
#include <cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
    int password = 2308;
    int input;
    while ( password != input)
    {
        cout <<" Enter yur password : ";

        cin >> input;

       { 
        if (password != input)
          {
            cout << " your sicret cod wrong"<< endl;
          }
          else
          {
             cout << "welcom";
          }
         
        }
     }
 
    int pause;
    cin >> pause;
    return 0;
} 