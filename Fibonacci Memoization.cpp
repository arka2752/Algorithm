// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
long long int F[100000];
long long int fib(int n)
{

    if (n == 0 || n == 1)
    {
        F[n] = n;

        return F[n];
    }
    else if (F[n] == 0)
    {

        F[n] = fib(n - 1) + fib(n - 2);
    }
    return F[n];
}
int main()
{
    int n;
    cin >> n;
    long long int nfib = fib(n);
    cout << n << "th fibonacci = " << nfib << endl;
}