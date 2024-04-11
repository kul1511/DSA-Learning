#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a four digit number using 3, 5 and 7: ";
    cin>>n;
    int n1=n;
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    if(n<0 || n==0 || sum%3==0 || sum%5==0 || sum%7==0){
        cout<<"Found a valid number: "<<n1; 
    }else{
        cout<<"Invalid Number: "<<n1;
    }
return 0;
}