//This is Arka's code.....
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5]={5,7,6,3,2};

    for(int i=0; i<5; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<5; i++){
        int x=ar[i];
        int j=i-1;
        while(j>=0 && ar[j]>x){
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=x;
    }

    for(int i=0; i<5; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;




}