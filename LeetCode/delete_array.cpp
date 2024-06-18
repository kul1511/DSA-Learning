#include <iostream>
using namespace std;
void sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (i < j)
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int n, size;
    cout << "Enter size: ";
    cin >> size;
    int nums[size];
    // cout << "Enter the index at which element to be deleted: ";
    cout << "Enter the to be deleted: ";
    cin >> n;

    cout << "Enter array:";
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    // cout << "Array 1: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // n=nums[size];
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == n)
        {
            for (int j = i; j < size-1; j++)
            {
                nums[j] = nums[j + 1];
            }
            size=size-1;
        }
            cout<<"\nArray after every iteration: ";
            for (int i = 0; i < size; i++)
            {
                cout << nums[i] << " ";
            }
    }
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == n)
        {
            for (int j = i; j < size-1; j++)
            {
                nums[j] = nums[j + 1];
            }
            size=size-1;
        }
    }
    // // sort(nums, size);
    // cout << "\nArray 2: \n";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << nums[i] << " ";
    // }
    // size -= 1;
    cout << "\nArray after deleting: ";
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout<<"size: ";
    int counter=0;
        for(int i=0;i<size;i++){
            if(nums[i]!=n)counter++;
        }
        cout<<counter;
    return 0;
}