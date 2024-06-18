#include<iostream>
using namespace std;
    
    int maxof(int a,int b){
        return a>b?a:b;
    }
    
int main(){
    string w1="ab";
    string w2="pqrds";
    string w3="";
    int i=0,j=0;
    while(i<maxof(w1.length(),w2.length())){
        if(i<w1.length()){
            w3+=w1[i];
        }
        if(i<w2.length()){
            w3+=w2[i];
        }
        i++;
    }
    cout<<"Merged Strings: "<<w3;
    w3+="dsaras";
     
return 0;
}