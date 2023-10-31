// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
int cnt = 0;                                      // for couting comparisons
void mergesort(int ar[], int low, int high);      // prototype of mergesort function
void merge(int ar[], int low, int mid, int high); // prototype of merge function
int main()
{
    int n;    // size of array
    cin >> n; // taking input

    int ar[n]; // declare the array
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i]; // taking input of elements of array
    }

    mergesort(ar, 0, n - 1); // calling the function

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << ar[i]; // avoid space of last element
        }
        else
        {

            cout << ar[i] << " "; // printing the elements
        }
    }
    cout << endl;
    cout << cnt << endl; // printing the comparisons
}
void merge(int ar[], int low, int mid, int high) // function for two way merge method
{

    int tmp[high + 1]; // temporary array for storing sorted elements
    int i = low, j = mid + 1, k = low;
    while (i <= mid && j <= high)
    {
        if (ar[i] < ar[j]) // compring between two elements store less value on temporary array
        {
            cnt++; // incrementing to count the comparisons
            tmp[k] = ar[i];
            k++;
            i++;
        }
        else
        {
            cnt++; // incrementing to count the comparisons
            tmp[k] = ar[j];
            k++;
            j++;
        }
    }

    for (; i <= mid; i++)
    {
        cnt++;          // incrementing to count the comparisons
        tmp[k] = ar[i]; // remaining elements to store on temp array as it is
        k++;
    }
    for (; j <= high; j++)
    {
        cnt++;          // incrementing to count the comparisons
        tmp[k] = ar[j]; // remaining elements to store on temp array as it is
        k++;
    }

    for (int a = low; a < k; a++)
    {

        ar[a] = tmp[a]; // copying the sorted elements on main array
    }
}

void mergesort(int ar[], int low, int high)
{
    if (low < high)
    {

        int mid = (low + high) / 2;
        mergesort(ar, low, mid);      // recursively divide the array
        mergesort(ar, mid + 1, high); // recursively divide the array
        merge(ar, low, mid, high);    // merge after dividing
    }
}