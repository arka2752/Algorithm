// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
int bubble_sort(int ar[], int n); // prototype of bubble sort
int main()
{
    int n;    // size of array
    cin >> n; // taking input

    int ar[n]; // declaration of array
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i]; // taking input of array
    }

    int cnt = bubble_sort(ar, n); // calling bubble sort function

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << ar[i]; // to avoid space after last element
        }
        else
        {

            cout << ar[i] << " "; // printing after sorted
        }
    }
    cout << endl; // new line print
    cout << cnt;  // print the swapping count
    cout<<endl;
}
int bubble_sort(int ar[], int n) // function for bubble sort
{
    int cnt = 0; // initialize counter as 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                swap(ar[j], ar[j + 1]); // if the number is greater than next element swap both numbers
                cnt++;                  // incrementing counter
            }
        }
    }
    return cnt; // return the counter of swapping numbers
}
