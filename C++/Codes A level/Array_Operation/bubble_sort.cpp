#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, temp;
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
    for(int i = 0; i < n - 1; ++i) {
        for(int j = 0; j < n - i - 1; ++j) {
            if(ar[j] > ar[j + 1]) {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for(int i = 0; i < n; ++i) {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}