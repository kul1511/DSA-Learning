#include <iostream>
#include<vector>
using namespace std;

bool isContains(string str,char c){
    bool flag=true;
    // cout<<"String: "<<str<<" char: "<<c;
    for(int i=0;i<str.length();i++){
        if(c==str[i]){
            return false;
        }
    }
    return flag;
}

// void removeDuplicate(string str){
//     char s[str.length()];
//     int count=0;
//     for(int i=0;i<str.length();i++){
//         for(int j=i;j<str.length()-1;j++){
//             if(str[i]!=str[j+1]){
//                 cout<<str[];
//             }
//         }
//         count++;
//     }
//     // for(char c1:s){
//     //     cout<<c1;
//     // }
// }

int main()
{
    vector<int> v;
    string str = "hello";
    int length = 0;
    for (char c : str)
    {
        length++;
    }
    

    int  count=0;
    for(int i=0;i<length;i++){
        for(int j=i;j<length-1;j++){
            if(str[i]!=str[j+1]){
                count++;
            }
            else{
                count=0;
            }
            v.push_back(count);
        }
    }

    for(auto a:v){
        cout<<a<<" ";
    }
    return 0;
}