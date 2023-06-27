#include <iostream>
using namespace std;
int main()
{
     string a[2][4] ={
        {"as","dc","fg","hj"},
        {"jj","dc","fg","hj"}
        };
    //   string iteam =a[0][2];
    //   cout<<iteam;
    //  a[1][3] = "bmw";
    //   cout<<a[1][3];
    //   cout<<a[2][4]<< "\n";

      for ( int i=0;i<=2;i++)
      {
        for(int j=0;j<=4;j++)
        {
          //cout<<i<< " "<<j;
          cout<<a[i][j];

          
        }
        cout<< "\n";
      }

     
  
    
} 