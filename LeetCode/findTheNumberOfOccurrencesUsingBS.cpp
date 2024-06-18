#include<iostream>
using namespace std;

int getFirst(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int res=-1;
    while(s<=e){
        if(arr[mid]==k){
            res=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return res;
}
int getSecond(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    int res=-1;
    while(s<=e){
        if(arr[mid]==k){
            res=mid;
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return res;

}



int main(){
     int n;
     cout<<"Enter size of array: ";
     cin>>n;
     int arr[n];
     cout<<"Enter elements into the array: ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     cout<<"Enter the element whose occurrences to be found: ";
     int k;
     cin>>k;
     cout<<"Number of Occurrences: "<<getSecond(arr,n,k)-getFirst(arr,n,k)+1;

     
return 0;
}