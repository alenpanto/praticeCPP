#include <iostream>
using namespace std;
int main()
{
    string refe ;
    refe = "ijlkj";
    cout<<refe<< "\n";
    string &hd =refe; // reference
    cout<<hd;

    cout<<&refe; // memory address
    
 
}
