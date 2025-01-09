#include<bits/stdc++.h>
using namespace std;

void remove(queue <int> &q, int x) {
    vector <int> v;
    for(int i = 0; i < 5; ++i) {
        v.push_back(q.front());
        q.pop();
    }
    for(int i = 0; i < 5; ++i) {
        int temp;
        if(v[i] == x) {
            temp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = temp;
        }
    }
    for(int i = 0; i < 4; ++i) {
        q.push(v[i]);
    }
}

void display(queue <int> a) {
    for( ; !a.empty(); ) {
        cout << a.front() << " ";
        a.pop();
    }
}

int main() {
    queue <int> q;
    int x;
    cout << "Queue elements: ";
    for(int i = 1; i < 6; ++i) {
        q.push(i);
    }
    display(q);
    cout << endl;
    cout << "Remove element from the queue: ";
    cin >> x;
    remove(q, x);
    cout << "New queue elements: ";
    display(q);
    cout << endl;

    return 0;
}