#include<iostream>
using namespace std;

int main()
{
    int n, count;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    int* arr = new int[n];
   for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << " = ";
        cin >> arr[i];
    }

    cout << "Enter the number of times you want the array to rotate right = ";
    cin >> count;

    count = count % n;

    int* a = new int[n];
    
    
         for (int i = 0; i < count; i++)
        {
        a[i] = arr[n - count + i]; 
        }

         for (int i = 0; i < n - count; i++)
       {
        a[count + i] = arr[i]; 
        }

    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
        cout << arr[i] << " ";
    }

    delete[] arr;
    delete[] a;

    return 0;
}