#include<iostream>
#include<cmath>
#include <cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
    cout <<"Write number : ";
    int x ;
    cin >> x;
   for (int i = 1; i <= x; i++) {
        for (int y = 0; y < i; y++){
              cout << "*";
            }
        cout << endl;   
}
    int pause;
    cin >> pause;
    return 0;
}  