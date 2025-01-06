#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, n;
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
    cout << "Input an array value to delete it: ";
    cin >> a;
    for(int i = 0; i < n; ++i) {
        if(ar[i] == a) {
            b = i;
        }
    }
    for(int i = b; i < n - 1; ++i) {
            ar[i] = ar[i + 1];
    }
    
    cout << "New array: ";
    for(int i = 0; i < n - 1; ++i) {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}