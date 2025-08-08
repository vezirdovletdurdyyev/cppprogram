#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    
    const short maxValue = 6;
    const short minValue = 1;
    srand (time (0));
    short number1 = ((rand()% (maxValue - minValue +1 ))+minValue);
    short number2 = ((rand()% (maxValue - minValue +1 ))+minValue);
    cout << number1 << endl;
    cout << number2;
    int pause;
    cin >> pause;
    return 0;

}