
#include<iostream>
using namespace std;
int main()
{
	int a[10][10],i,j,m,n,mul,out[10][10];
	cout<<"enter the row";
	cin>>m;
	cout<<"enter the colmn";
	cin>>n;
	cout<<"enter the array";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the number";
	cin>>mul;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			out[i][j]=mul*a[i][j];
			cout<<out[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}
