#include <iostream>
using namespace std;
int main()
{
    int n, reve = 0, rem;
    cout << "enter the number\n";
    cin >> n;

    while (n != 0)
    {
        rem = n % 10;
        reve = reve * 10 + rem;
        n /= 10;
    }
    cout << reve;
}