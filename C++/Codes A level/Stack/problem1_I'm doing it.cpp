#include<bits/stdc++.h>
using namespace std;
#define n 5

int ar[n], top = -1;

void push(int x) {
    if(top == n - 1) {
        cout << "Stack is full\n\n";
    }
    else {
        ar[++top] = x;
        cout << "Pushed " << ar[top] << "\n";
    }
}

void pop() {
    if(top == -1) {
        cout << "Cannot pop anymore elements\n\n";
    }
    else {
        cout << "Poped " << ar[top--] << "\n";
    }
}

bool isFull() {
    if(top == n - 1) {
        return true;
    }
    return false;
}

bool isempty() {
    if(top == -1) {
        return true;
    }
    return false;
}

int main() {
    for(int i = 1; i < 7; ++i) {
        push(i);
    }

    for( ; !isempty() || isFull(); ) {
        pop();
    }
    pop();

    return 0;
}