#include<iostream>
using namespace std;

int pivotIndex(int arr[],int n){
    int start = 0 ;
    int end = n-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }

    return start;
}

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
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int n=8,k=3;
    int arr[n] = {11,3,4,5,6,7,8,9};
    int pivot = pivotIndex(arr, n);
    if(arr[pivot] <= k && arr[n-1] >= k ){
        cout<< binarySearch(arr, pivot, n-1, k);
    }
    else{
        cout<< binarySearch(arr, 0, pivot-1, k);
    }
}
