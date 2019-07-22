#include <bits/stdc++.h>
using namespace std;

int binarySearch(int ar[], int low, int high, int key)
{
    if (high < low)
        return -1;
    int mid = (high + low) / 2;
    if (ar[mid] == key)
        return mid;
    if (key > ar[mid])
        return binarySearch(ar, mid + 1, high, key);
    return binarySearch(ar, 0, mid - 1, key);
}

int findPivot(int arr[], int low, int high)
{
    // base cases
    if (high < low)
        return -1;
    if (high == low)
        return low;

    int mid = (low + high) / 2; /*low + (high - low)/2;*/
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;

    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);

    if (arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);

    return findPivot(arr, mid + 1, high);
}

/* Searches an element key in a pivoted 
   sorted array arr[] of size n */
int pivotedBinarySearch(int arr[], int n, int key)
{
    int pivot = findPivot(arr, 0, n - 1);

    // If we didn't find a pivot,
    // then array is not rotated at all
    if (pivot == -1)
        return binarySearch(arr, 0, n - 1, key);

    // If we found a pivot, then first compare with pivot
    // and then search in two subarrays around pivot
    if (arr[pivot] == key)
        return pivot;

    if (arr[0] <= key)
        return binarySearch(arr, 0, pivot - 1, key);

    return binarySearch(arr, pivot + 1, n - 1, key);
}

//

int search(int ar[], int high, int low, int key)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (ar[mid] == key)
        return mid;
    if (ar[low] <= ar[mid])
    {
        if (key <= ar[mid] && key >= ar[low])
            return search(ar, mid - 1, low, key);
        return search(ar, high, mid + 1, key);
    }
    if (key <= ar[high] && key >= ar[mid])
        return search(ar, high, mid + 1, key);
    return search(ar, mid - 1, low, key);
}

int main()
{
    int arr[] = {13, 18, 25, 2, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    int i = search(arr, n - 1, 0, key);

    if (i != -1)
        cout << "Index: " << i << endl;
    else
        cout << "Key not found";
    return 0;
}