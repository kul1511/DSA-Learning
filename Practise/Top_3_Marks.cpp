#include <iostream>
using namespace std;

void searchNumber(int, int[]);

int main()
{
    int num = 4;
    int a[num];
    int n, count = 0;

    cout << "Enter 4 ca marks:";
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    cout << " Marks:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << a[i] << " ";
    }
    // cout << "Enter a number to be searched:";
    // cin >> n;

    searchNumber(num, a);

    return 0;
}

void searchNumber(int size, int arr[])
{
    
    for (int i = 0; i < size; i++)
    {
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int sum=0;
    cout<<"\nMarks sorted: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nMarks of top 3 scores: ";
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<" ";
        sum+=arr[i];
    }
    cout<<"\nThe sum of top 3 scores: "<<sum;

}
