#include <iostream>

using namespace std;

int main ()
{
   cout <<  " Rous :" ;
   int rous;
   cin >> rous;
   for (int i = 1 ; i <=rous; i++){
      for ( int j = 0; j < i; j++)
      cout << "*";
      cout << endl;
   } 
    int pause;
    cin >> pause;
    return 0;

}