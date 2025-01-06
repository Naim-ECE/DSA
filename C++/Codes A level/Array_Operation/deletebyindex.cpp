#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, n;
    cout << "Enter array size: ";
    cin >> n;
    int ar[n];
    cout << "Input elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> ar[i];
    }
    cout << "Array: ";
    for(int i = 0; i < n; ++i) {
        cout << ar[i] << " ";
    }
    cout << endl;
    cout << "Enter index number form 0 to " << n - 1 << "th to delete the element from array: ";
    cin >> a;
    if(a > n - 1 || a < 0) cout << "It's not a valid position\n";
    else {
        for(int i = a; i < n - 1; ++i) {
            ar[i] = ar[i + 1];
        }
    }
    cout << "New array: ";
    for(int i = 0; i < n - 1; ++i) {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}