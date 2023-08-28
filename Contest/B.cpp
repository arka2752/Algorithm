// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
void counting_sort(int ar[], int n); // prototype of counting_sort
int main()
{
    int n;    // size of array
    cin >> n; // taking input of array

    int ar[n]; // declaring array
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i]; // taking input of array element
    }

    counting_sort(ar, n); // calling function to sort elements using counting sort
}
void counting_sort(int ar[], int n)
{
    int mx = 0; // declaring mx variable to store max element by comparing each elements

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > mx) // comparing with each elements
        {
            mx = ar[i]; // storing max element on mx
        }
    }
    int frq[mx + 1]; // declaring array for storing counting of elements

    for (int i = 0; i <= mx; i++)
    {
        frq[i] = 0; // initializing all value as zero
    }

    for (int i = 0; i < n; i++)
    {
        frq[ar[i]]++; // counting element
    }

    int pos[mx + 1]; // declaring array for storing sorted element position

    pos[0] = frq[0]; // directly storing first element because it has no previous element

    for (int i = 1; i <= mx; i++)
    {
        pos[i] = (frq[i] + frq[i - 1]); // element take position sum of previous and current elements
        frq[i] = pos[i];                // storing sum in the current index
    }

    int br[n]; // declaring this array to store sorted array

    for (int i = 0; i < n; i++)
    {

        pos[ar[i]]--;           // decrementing because it is zero based index
        br[pos[ar[i]]] = ar[i]; // storing element on its sorted position
    }

    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << br[i]; // avoid space after last element
        }
        else
        {

            cout << br[i] << " "; // printing the array
        }
    }
    cout << endl; // avoiding presentation error
}