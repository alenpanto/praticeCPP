#include <iostream>
using namespace std;
int main()
{
    string pg;
    pg = "cat";
    cout<<&pg;

    string *pm=&pg;//declearing pointer variable
    cout<<pm; 
    cout<<*pm; //DREFERENCE
    *pm = "dog";
    cout<<*pm;

}