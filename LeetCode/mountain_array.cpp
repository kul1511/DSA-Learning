#include <iostream>
using namespace std;

int mountainIndex(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid = start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}


int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the loop elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int res = mountainIndex(arr,n);
    cout<<"Peak Index: "<<res;
    return 0;
}