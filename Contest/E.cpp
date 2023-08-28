// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
int selection_sort(int ar[], int n); // prototype of sorting function
int main()
{
    int n;    // for size of array
    cin >> n; // taking input

    int ar[n]; // declaration of array
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i]; // taking input of array
    }
    int cnt = selection_sort(ar, n); // calling function for sorting it will return swap count
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << ar[i]; // to avoid space after last element
        }
        else
        {
            cout << ar[i] << " "; // printing sorted element
        }
    }
    cout << endl;
    cout << cnt << endl; // printing count
}
int selection_sort(int ar[], int n) // function of selection sort
{
    int cnt = 0; // initialize counting as 0

    for (int i = 0; i < n; i++)
    {
        int x = i; //taking variable to store 

        for (int j = i; j < n; j++) //swapping minimum number to its appropiate position 
        {
            if (ar[j] < ar[x])
            {
                x = j;
            }
        }
        if(i!=x) //when they are not same number
        {

            swap(ar[i], ar[x]); // swapping small number
            cnt++;              // incrementing count
        }
    }
    return cnt; // returning the count
}