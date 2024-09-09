#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases
    while(T-- && T >= 0) {
        int n;
        cin >> n;  // Read the number of elements in the array
        
        int arr[n];  // Create an array of size n
        for(int i = 0; i < n; i++) {
            cin >> arr[i];  // Read each element into the array
        }
        
        bool isSorted = true;  // Assume the array is sorted
        for(int i = 1; i < n; i++) {
            if(arr[i] < arr[i-1]) {  // If the array is not sorted
                cout << "no\n";  // Print "no"
                isSorted = false;
                break;  // Exit the loop early
            }
        }
        
        if(isSorted) {
            cout << "yes\n";  // Print "yes" if the array is sorted
        }
    }
    
    return 0;
}
