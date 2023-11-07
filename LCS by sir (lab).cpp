/*

Input
-------
bd
abcd

Output
-------
0 0 0 0 0
0 0 1 1 1
0 0 1 1 2
bd


*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    int n=str1.size();
    int m=str2.size();
    int LCS[n+1][m+1];
    memset(LCS,0,sizeof(LCS));
    for(int i=1; i<n+1; i++){
        for(int j=1; j<m+1; j++){
            if(str1[i-1]==str2[j-1]){
                LCS[i][j]=1+LCS[i-1][j-1];
            }
            else{
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
            }
        }
    }

    for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++){
            cout<<LCS[i][j]<<" ";
        }cout<<endl;
    }
    int i=n,j=m;
    string ans;
    while(i!=0){
        if(str1[i-1]==str2[j-1] && LCS[i][j]==1+LCS[i-1][j-1]){
            ans.push_back(str2[j-1]);
            i=i-1;
            j=j-1;

        }
        else{
            if(LCS[i][j]==LCS[i-1][j]){
                i=i-1;
                j=j;

            }
            else{
                i=i;
                j=j-1;
            }
        }
    }
    for(int i=ans.size()-1; i>=0; i--){
        cout<<ans[i];
    }cout<<endl;

}