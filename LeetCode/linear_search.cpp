#include <iostream>
using namespace std;

void searchNumber(int ,int, int[]);

int main()
{
    int num;
    int a[num];
    int n, count = 0;

    cout << "Enter size: ";
    cin >> num;
    cout << "Enter numbers:";
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    cout << "\nArray:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << a[i] << " ";
    }
    cout << "Enter a number to be searched:";
    cin >> n;

    searchNumber(n,num,a);

    return 0;
}

void searchNumber(int n,int size, int arr[])
{
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == n)
        {
            cout << "Number found" << endl;
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Number not found";
    }
}
