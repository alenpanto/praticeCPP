#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<< "enter a number";
   cin>>n;
   int i=1;

   do{
    int j =1;
    do{
        cout<<i<<" "<<j<< "\n";
        j++;
    }while (j<=n);
    i++;
}while (i<=n);
 // cout<< "*"<< "\n"; ex.
}
