// This is Arka's code.....

/*
  Input : 

  abcdef
  ayced


*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    int m = str1.size(), n = str2.size();

    str1 = '\0' + str1;
    str2 = '\0' + str2;
    int edit_dis[n + 1][m + 1];

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            if (j == 0)
            {
                edit_dis[i][j] = i;
            }
            else if (i == 0)
            {
                edit_dis[i][j] = j;
            }
            else if (str1[j] == str2[i])
            {
                edit_dis[i][j] = edit_dis[i - 1][j - 1];
            }
            else
            {
                int mn = min(edit_dis[i - 1][j], edit_dis[i][j - 1]);
                edit_dis[i][j] = 1 + min(mn, edit_dis[i - 1][j - 1]);
            }
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < m + 1; j++)
        {
            cout << edit_dis[i][j] << " ";
        }
        cout << endl;
    }cout<<endl;
    cout << "Minimum edit distance = " << edit_dis[n][m] << endl;
}