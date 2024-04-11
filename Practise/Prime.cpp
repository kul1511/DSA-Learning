#include <iostream>
using namespace std;
int main()
{
    int n = 13;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int rem=n%10;
        n=n/10;

        for (int i = 1; i <= rem; i++)
        {
            // while(i!=0){
            if (rem % i == 0)
            {
                cnt++;
                // cout<<i<<" ";
            }
        }
        if (cnt == 2)
        {
            cout << rem<<" Prime";
        }
        else
        {
            cout << rem<<" Not prime";
        }
    }
    return 0;
}