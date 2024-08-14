#include<iostream>
using namespace std;
    
void display(int arr [] , int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selecion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int min = arr[i];
            if(arr[j]<min){
                swap(arr[i],arr[j]);
            }
        }
    }
    display(arr,n);
}

int main(){

    int arr[] = {6,3,7,4,5,2,1};
    int n =7;
    selecion_sort(arr,n);
return 0;
}