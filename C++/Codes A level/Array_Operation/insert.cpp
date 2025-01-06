#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, n;
    cout << "Enter array size: ";
    cin >> n;
    int ar[n];
    cout << "Enter 0 to " << n - 1 << "th position & values\n\n";
    for(int i = 0; i < n; ++i) {
        cout << "Position & value: ";
        cin >> a >> b;
        if(a > n - 1 || a < 0) {
            cout << "It's not a valid position\n\n";
            --i;
        }
        else {
            ar[a] = b;
        }
    }
    cout << "\nArray: ";
    for(int i = 0; i < n; ++i) {
        cout << ar[i] << " ";
    }
    cout << endl;
    // cout << "Enter the position & the new value of the array: ";
    // cin >> a >> b;
    // if(a > n - 1) cout << "Position is not valid\n";
    // else {
    //     ar[a] = b;
    //     cout << "New array: ";
    //     for(int i = 0; i < n; ++i) {
    //         cout << ar[i] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}