#include<bits/stdc++.h>
using namespace std;

int main() {
    queue <int> q;

    cout << "Queue elements ";
    for(int i = 1; i < 6; ++i) {
        q.push(i);
        cout << i << " ";
    }
    cout << "\n\n";
    cout << "Top element " << q.front() << "\n\n";
    for(int i = 1; i < 6; ++i) {
        cout << "Deleted " << q.front() << "\n";
        q.pop();
        cout << "Top element " << q.front() << "\n\n";
    }

    return 0;
}