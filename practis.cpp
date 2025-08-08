#include <iostream>

using namespace std;

int main ()
{
  const double sales = 95000;
  cout << "Sales = $" << sales << endl; 
  double statetax = sales *0.04;
  cout << "State Tax = " << statetax << endl;
  double countrytax = sales*0.02;
  cout << "Country Tax = " << countrytax;

    int pause;
    cin >> pause;
    return 0;

}