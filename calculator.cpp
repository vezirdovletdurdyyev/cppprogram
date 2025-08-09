#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double resalt;

    double temperature[] = {60, 80, 90};
    for ( int i = 0 ; i< sizeof(temperature)/sizeof(int); i++)
        resalt += temperature[i];
        cout << resalt/(sizeof(temperature)/sizeof(int));
    
    int pause;
    cin >> pause;
    return 0;
}