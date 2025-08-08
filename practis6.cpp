#include <iostream>


using namespace std;

int main ()
{
    string street;
    cout <<  "write street :" ;
    getline(cin , street);
    
     string city;
    cout <<  "write city :" ;
    getline(cin , city);

     string state;
    cout <<  "write state :" ;
    getline(cin , state);

     string zipcode;
    cout <<  "write zipcode :" ;
    getline(cin , zipcode);
    cout << street << endl;
    cout <<  city << "," << state << "," << zipcode;

    int pause;
    cin >> pause;
    return 0;

}