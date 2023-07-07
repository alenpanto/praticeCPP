#include <iostream>
using namespace std;

int main()
{
    struct
    {
        int adno;
        string name;
    }   person1,person2,person3;



    person1.adno = 5;
    person1.name = "alen";
    cout << person1.adno << "\n"
         << person1.name;
    person2.adno= 6;
    person2.name="donboy";
    cout<<person2.adno<<person2.name<< "\n";
    person3.adno =7;
    person3.name ="hdujh";
    cout<<person3.adno<<person3.name;


    struct empxdetails
    {
        int idno;
        double imno;
     } employea,employeb,employec;

        employea.idno =2424;
        employea.imno =567278;
        cout<<"\n"<<employea.idno;

    empxdetails demo;
   
}
 