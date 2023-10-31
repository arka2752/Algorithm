// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;

int partition(int ar[], int l, int r, string s)
{
    int pivot = ar[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (ar[j] < pivot)
        {
            i++;
            cout<<"p"<<endl;
            cout << ar[i] << " " << ar[j] << endl;
            cout << s[i] << " " << s[j] << endl;
            cout << "---" << endl;
            swap(ar[i], ar[j]);
            swap(s[i], s[j]);
        }
    }
    cout << ar[i + 1] << " " << ar[r] << endl;
    cout << s[i + 1] << " " << s[r] << endl;
    cout << "---" << endl;
    swap(ar[i + 1], ar[r]);
    swap(s[i + 1], s[r]);
    return i + 1;
}
void quicksort(int ar[], int l, int r, string s)
{
    if (l < r)
    {
        int pi = partition(ar, l, r, s);
        quicksort(ar, l, pi - 1, s);
        quicksort(ar, pi + 1, r, s);
    }
}
int main()
{
    int t;    // testcase
    cin >> t; // taking input of testcase
    int n = t;

    string s;
    int ar[n];
    int k = 0;

    while (t--)
    {
        char a;
        int b;
        cin >> a >> b;

        s.push_back(a);
        ar[k] = b;
        k++;
    }
    int mx = 0;

    for (int i = 0; i < n; i++)
    {

        if (mx < ar[i])
        {
            mx = ar[i];
        }
    }

    char st[mx];

    quicksort(ar, 0, n - 1, s);

    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " " << ar[i] << endl;
    }
}