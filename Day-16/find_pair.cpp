#include <iostream>

using namespace std;

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> target;

    
    for (int i = 0; i < n - 1; i++) {
        
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                
                delete[] arr;
                return 0;    
            }
        }
    }

    cout << "No pair found with the given target sum." << endl;
    delete[] arr;
    return 0;
}