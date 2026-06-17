#include <iostream>
using namespace std;
int main()
 {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the elements= " << endl;
    for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
    }

    int max_freq_element = arr[0];
    int max_count = 0;

    
    for (int i = 0; i < n; i++) 
    {
        int current_count = 0;

        
        for (int j = 0; j < n; j++) 
        {
            if (arr[i] == arr[j])
             {
                current_count++;
            }
        }

        
        if (current_count > max_count)
         {
            max_count = current_count;
            max_freq_element = arr[i];
        }
    }

    cout << "The element with maximum frequency is= " << max_freq_element << endl;
    cout << "It appeared " << max_count << " times" << endl;

    delete[] arr;
    return 0;
}