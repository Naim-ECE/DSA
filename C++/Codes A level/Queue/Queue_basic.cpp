#include<bits/stdc++.h>
using namespace std;
#define n 5

int ar[n], front = -1, back = -1;

void enqueue(int a) {
    if(back == n - 1) {
        cout << "Queue is full\n";
    }
    ar[++back] = a;
    cout << "Enqueued " << ar[back] << "\n";
    if(front == -1) {
        front = 0;
    }
}

void dequeue() {
    if(front > back) {
        cout << "Queue is empty\n";
        front = -1;
        back = -1;
    }
    else {
        cout << "Dequeued " << ar[front] << "\n";
        ++front;
    }
}

void top() {
    if(front >= back) {
        cout << "Top element " << ar[front] << "\n";
    }
}

int main() {
    for(int i = 0; i < n; ++i) {
        enqueue(i + 1);
    }
    cout << endl;
    top();
    cout << endl;
    dequeue();
    top();
    cout << endl;
    dequeue();
    top();
    cout << endl;
    dequeue();
    top();
    cout << endl;
    dequeue();
    top();
    cout << endl;
    dequeue();
    top();
    cout << endl;
    dequeue();

    return 0;
}