#include <iostream>
using namespace std;
void sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for(int j=i+1;j<size;j++){
            if(i<j){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n, size;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];
    cout << "Enter a no: ";
    cin >> n;
    cout << "Enter array:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array 1: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = size; i >= size; i--)
    {
        arr[i + 1] = arr[i];
    }
    sort(arr, size);
    cout << "Array 2: \n[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << "]";
    arr[size] = n;
    size += 1;
    cout << "\nArray after inserting: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}