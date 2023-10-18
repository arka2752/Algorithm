// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
void merge(int ar[], int l, int mid, int r, int n)
{
    int left = l;
    int right = mid + 1;
    int k = l;

    int temp[n];

    while (left <= mid && right <= r)
    {
        if (ar[left] <= ar[right])
        {
            temp[k] = ar[left];
            left++;
            k++;
        }
        else
        {
            temp[k] = ar[right];
            right++;
            k++;
        }
    }
    while (left <= mid)
    { 
        temp[k] = ar[left];
        left++;
        k++;
    }

    while (right <= r)
    {
        temp[k] = ar[right];
        right++;
        k++;
    }
   

    for (int i = l; i < k; i++)
    {
        ar[i] = temp[i];
    }
}
void mergesort(int ar[], int l, int r, int n)
{
    if (l == r)
        return;

    int mid = (l + r) / 2;
    mergesort(ar, l, mid, n);
    mergesort(ar, mid + 1, r, n);
    merge(ar, l, mid, r, n);
}
int main()
{
    int n;
    cin >> n;

    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    mergesort(ar, 0, n - 1, n);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}