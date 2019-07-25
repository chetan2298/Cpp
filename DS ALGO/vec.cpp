
// C++ program to sort an array such that
// sum of product of alternate element
// is minimum.
#include <bits/stdc++.h>

using namespace std;

int minSum(int arr[], int n)
{

    // create evenArr[] and oddArr[]

    vector<int> evenArr;

    vector<int> oddArr;



    // sort main array in ascending order

   // sort(arr, arr+n );



    // Put elements in oddArr[] and evenArr[]

    // as per desired value.

    for (int i = 0; i < n; i++)

    {

        if (i < n/2)

            oddArr.push_back(arr[i]);

        else

            evenArr.push_back(arr[i]);

    }



    // sort evenArr[] in descending order

  //  sort(evenArr.begin(), evenArr.end(), greater<int>());



    // merge both sub-array and

    // calculate minimum sum of

    // product of alternate elements

    int i = 0, sum = 0;

    for (int j=0; j<evenArr.size(); j++)

    {

        arr[i++] = evenArr[j];

        arr[i++] = oddArr[j];

        sum += evenArr[j] - oddArr[j];

    }



    return sum;
}


// Driver Program

int main()
{

    int arr[] = { 1, 3, 5, 4, 2, 6, 7, 8};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "required sum = " << minSum(arr, n)<<" ";

    //cout << "\nSorted array in required format : ";

    for (int i=0; i<n; i++)

       cout << arr[i] << " ";

    return 0;
}

