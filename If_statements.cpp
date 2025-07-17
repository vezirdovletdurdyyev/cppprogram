#include<iostream>

using namespace std;

int main()
{
    int temperature;
    cin >>temperature;
    if (temperature <= 60)
    {
        cout << "cold";
    }
    else if (temperature <= 90)
    {
        cout << "nice";
    }
    else 
    {
        cout << "hot";
    }
    int pouse;
    cin >> pouse;
    return 0;
}