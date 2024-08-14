#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}    

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(!arr[i]>arr[i+1])continue;
        for(int j=0;j<n-i-1;j++){
            // cout<<i<<" "<<j+1<<endl;
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
            display(arr,n);
}    

int main(){
    int arr[] = {5,2,6,7,3,1};     
    // int arr[] = {1,2,3,5,6,7};     
     bubbleSort(arr,6);
return 0;
}