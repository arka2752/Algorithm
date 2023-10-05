// This is Arka's code.....
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar[6] = {5, 8, 6, 1, 7, 9};

    for (int i = 0; i < 6; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (ar[i] > ar[j])
            {
                swap(ar[i], ar[j]);
            }
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}