#include<bits/stdc++.h>
using namespace std;

void sort(queue <int> &a) {
    vector <int> v;
    for( ; !a.empty(); ) {
        v.push_back(a.front());
        a.pop();
    }
    sort(v.begin(), v.end());
    for(unsigned i = 0; i < v.size(); ++i) {
        a.push(v[i]);
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
    q.push(12);
    q.push(81);
    q.push(26);
    q.push(-5);
    q.push(2);
    cout << "Original queue: ";
    display(q);
    cout << endl;
    sort(q);
    cout << "Sorted queue  : ";
    display(q);
    cout << endl;

    return 0;
}