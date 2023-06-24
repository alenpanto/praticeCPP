#include <iostream>

using namespace std;

int main()
{
  int i, n, sum = 0;
   cout << "enter a number\n";
   cin>>n;

   for ( i=1; i<=n; i++){
    if (i%2==0){
       sum = sum +i;
        cout<<i<<",";
    }
   }
     cout<< "sum = "<< sum;
   return 0;
}
