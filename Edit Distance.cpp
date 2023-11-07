/*
Input
---------
ayced
abcdef

Output
---------
0 1 2 3 4 5 6
1 0 1 2 3 4 5
2 1 1 2 3 4 5
3 2 2 1 2 3 4
4 3 3 2 2 2 3
5 4 4 3 2 3 3

f is replaced by d
d is deleted
b is replaced by y


*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int n=s1.size();
    int m=s2.size();
    int ED[n+1][m+1];
    for(int j=1; j<m+1; j++){
        ED[0][j]=j;
    }
    for(int i=0; i<n+1; i++){
        ED[i][0]=i;
    }
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(s1[i-1]==s2[j-1]){
                ED[i][j]=ED[i-1][j-1];
            }
            else{
                ED[i][j]=1+min({ED[i-1][j],ED[i][j-1],ED[i-1][j-1]});
            }
        }
    }

    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            cout<<ED[i][j]<<" ";
        }cout<<endl;
    }
    int i=n;
    int j=m;
    while(i!=0){
        if(s1[i-1]==s2[j-1]){
            i=i-1;
            j=j-1;
        }
        else{
            if(ED[i][j]==1+ED[i-1][j-1]){
                cout<<s2[j-1]<<" is replaced by "<<s1[i-1]<<endl;
                i=i-1;
                j=j-1;
            }
            else if(ED[i][j]==1+ED[i-1][j]){
                cout<<s2[j-1]<<" is inserted "<<endl;
                i=i-1;
            }
            else{
                cout<<s2[j-1]<<" is deleted "<<endl;
                j=j-1;
            }
        }
    }

}