#include <iostream>

using namespace std;

int main()
{

    int i, n, sum = 0;
    cout<< "enter a number\n";
    cin>>n;

    for (i=1; i<=n; i++){
           sum = sum +i;  // sum += i

    }
        cout<< "sum = "<< sum;
 return 0;
}
