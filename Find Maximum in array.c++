#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int n, m, big;
    cin >> m;
    while (m--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        big=0;
        for (int i = 0; i < n; i++) {
            if (a[i] > big) {
                big = a[i];
            }
        }
        cout << big << endl;
    }
    return 0;

}