// This is Arka's code.....
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int n, int array[]); // prototypes of function of insertion sort
int main()
{
    int n;        // size of array
    cin >> n;     // taking input of size
    int array[n]; // declaration of array
    for (int i = 0; i < n; i++)
    {
        cin >> array[i]; // taking input for array
    }
    insertion_sort(n, array); // calling insertion function
}

void insertion_sort(int n, int array[]) // function for insertion sort
{
    for (int i = 0; i < n; i++)
    {
        int x = array[i];              // variable for saving current index value to comapare previous index value
        int j = i - 1;                 // previous index
        while (j >= 0 && array[j] > x) // if any previous index exist and previous number is greater than current it will initiate the loop
        {

            array[j + 1] = array[j]; // checking and assigning value on appropiate position
            j--;                     // decreamenting
        }
        array[j + 1] = x; // fix the current value
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                cout << array[i]; //to avoid space on last element
            }
            else
            {

                cout << array[i] << " "; // for printing each changes
            }
        }
        cout << endl;
    }
   
}