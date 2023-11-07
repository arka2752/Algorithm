#include<bits/stdc++.h>
/*

7
3 4 -1 0 6 2 3

non decreasing -> if(>=)

*/
using namespace std;
int main()
{
    //LIS

    int n;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    int LIS[n];
    //memset(LIS,1,sizeof(LIS));

    for(int i=0; i<n; i++){
    LIS[i]=1;
    }

    for(int i=1; i<n; i++){
      for(int j=0; j<i; j++){
        if(ara[i]>ara[j]){
        LIS[i]=max(LIS[i],1+LIS[j]);
        }
      }
    }
for(int i=0; i<n; i++){
cout<<LIS[i]<<" ";
}

}
