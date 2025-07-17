#include <iostream>

using namespace std;

int main ()
{
    bool citizen = true;
    bool bechelor =false;
    bool exprience = 1;
    bool isEligible = citizen && (bechelor || exprience >= 2);
    cout << boolalpha << isEligible; 
    int pause;
    cin >> pause;
    return 0;

}