#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target=0;
    cout<<"Enter the target: ";
    cin>>target;

    for(int i=0;i<size;i++){
        for(int j=i;j<size-1;j++){
            if(arr[i]+arr[j+1]==target){
                cout<<i<<" "<<j+1;
                break;
            }
        }
        cout<<endl;
    }
     
return 0;
}