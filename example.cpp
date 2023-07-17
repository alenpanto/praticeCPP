#include <iostream>
using namespace std;
 

           int main(){
               int a[5],n,i,sum=0;
               cout<< "enter the limit \n";
               cin>>n;


              cout<< "enter the input \n";
            for(i=0;i<n;i++) {
                cin>>a[i];
            }
            for(i=0;i<n;i++){
                sum =sum+a[i];
            } 
            cout<<sum;


           }