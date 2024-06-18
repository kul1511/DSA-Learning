#include<iostream>
using namespace std;

int pivotIndex(int arr[],int n){
    int start = 0 ;
    int end = n-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]>arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }

    return start;
}

int main(){
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = pivotIndex(arr,n);
    cout<<"Pivot Index: "<<res; 
     
return 0;
}