#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bool found = false; 
    
    for (int i = 0; i < n; i++) {
        
        if (x == arr[i]) {
            
            found = true; 
            break;
        }
    }
    
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl; 
    }
    
    return 0;
}