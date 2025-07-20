#include<iostream>
using namespace std;
int main ()
 {
    int temperatures [] = {60, 80, 90 };
    double sum = 0;

    for (int temperature : temperatures){
        sum += temperature;
    }
        short count = sizeof(temperatures)/sizeof(int);

    cout << sum / count ;
    
    int pause;
    cin >> pause
    return 0;


}