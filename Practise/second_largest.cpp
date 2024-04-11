#include<iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int large,second=INT_MIN;
    for(int i=0;i<n;i++){
        if(second>arr[i]){
            second=arr[i];
        }
        large=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<large){
                large
            }
        }
    }
}