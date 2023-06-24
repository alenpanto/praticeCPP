#include <iostream>

using namespace std;

int main()
{
   int a[5],n,sum=0;
   cout<< " enter a limit \n";
   cin>>n;
   
   cout<< "input \n";
   
   for (int i =0; i<n;i++)
   {
       cin>>a[i];
   }

   for (int i=0 ; i<n; i++)
   {
       sum = sum+a[i];

   }

      cout<<sum;



    return 0;
}
