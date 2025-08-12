#include<iostream>
#include<cmath>
#include <cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;
int greet (int number1, int number2)
{
    return (number1 > number2) ? number1 : number2;
}

int main()
{
   int lerger = greet (5, 3);
   cout<< lerger << endl;

    int pause;
    cin >> pause;
    return 0;
}