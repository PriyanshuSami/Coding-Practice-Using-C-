#include<bits/stdc++.h>

using namespace std;
int main() {
    int t, n, x, y;
    cin >> t;
    while (t--) {
        cin >> n >> x >> y;
        int a[n];
        int sum = 0;
        int plus = 0;
        //Part 1 for Sum
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            plus = plus + a[i];
            if (a[i] <= y) {
                a[i] = 0;
            }
            else {
                sum = sum + a[i] - y;
            }
        }
        sum = sum + x;

        if (sum < plus) {
            cout << "COUPON" << endl;
        }
        else {
            cout << "NO COUPON" << endl;
        }
    }
    return 0;
}