#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    
    const double pi = 3.14;
    double radius;
    cout << "Radius:";
    cin >> radius;
  
    double S = pi * pow(radius ,2);
    cout << S;

    int pause;
    cin >> pause;
    return 0;

}