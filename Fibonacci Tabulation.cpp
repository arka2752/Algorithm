//This is Arka's code.....
#include<bits/stdc++.h>
using namespace std;
long long int fib(int n){
    long long int F[100000];
    F[0]=0,F[1]=1;
    for(int i=2; i<=n; i++){
        F[i]=F[i-1]+F[i-2];
    }
    return F[n];
}
int main()
{
    int n;
    cin>>n;
    long long int nfib = fib(n);
    cout<<n<<"th fibo: "<<nfib<<endl;
}