#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    cout << left << setw (15) << "Course" << setw(15) << "students" << endl;
    cout << left << setw (15) << "C++" << right << setw(10) << "100" << endl;
    cout << left << setw (15) << "JavaScript" << right << setw(10) << "50" ;
    int pause;
    cin >> pause;
    return 0;

}