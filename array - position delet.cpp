#include <iostream>
using namespace std;
int main()
{
		int a[5],n,p,i;
		 cout<<"enter the limt";
		 cin>>n;
		 cout<<"in 1\n";
 		for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
         cout<<"enter the position\n";
         cin>>p;
		for (int i = 0; i < n; i++)
        {
           if(p==i)
           {
           		for (int i=p; i<=n; i++)
        		{
				a[i]=a[i+1];
      	  		}
      	  }
      }
      cout<<"out\n";
		for (int i = 0; i < n-1; i++)
        {
				cout<<a[i]<<" ";
        }
}
