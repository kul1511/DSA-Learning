#include<iostream>
using namespace std;

    int binarySearch(int k){
        int s=0;
        int e=k;
        int mid = s+(e-s)/2;
        int ans=-1;
        while(s<=e){
            int square=mid*mid;
            if(square == k){
                return mid;
            }   
            if(square<k){
                ans=mid;
                s = mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }

int main(){
     int k=77;
     cout<<binarySearch(k);
     
return 0;
}