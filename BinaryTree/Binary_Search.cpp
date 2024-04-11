#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int h, int x)
{
    int mid = l + (h - l) / 2;
    while (l <= h)
    {
        
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
        mid = l + (h - l) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 14, 18, 19};
    int size = 0;
    for (int a : arr)
    {
        size++;
    }
    cout << "Size: " << size;
    int res = binarySearch(arr, 0, size, 3);
    if (res == -1)
    {
        cout << "\nNumber not found in array";
    }
    else
    {
        cout << "\nNumber found at index: " << res;
    }

    return 0;
}