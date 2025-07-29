#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
   const double pi = 3.14;
   double radius;
   cout << "radius: ";
   cin >> radius; 
   double result = pi*pow(radius , 2);
   cout << result;
   
    int pause;
    cin >> pause;
    return 0;
}