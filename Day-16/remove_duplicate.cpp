#include <iostream>

using namespace std;

int main()
 {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int* temp = new int[n];
    int unique_count = 0; 

    
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0; 

        
        for (int j = 0; j < unique_count; j++) {
            if (arr[i] == temp[j]) {
                is_duplicate = 1; 
                break;            
            }
        }

        
        if (is_duplicate == 0)
         {
            temp[unique_count] = arr[i];
            unique_count++;
        }
    }


    cout << "Array after removing duplicates: ";
    for (int i = 0; i < unique_count; i++)
     {
        cout << temp[i] << " ";
    }
    cout << endl;

    
    delete[] arr;
    delete[] temp;
    return 0;
}