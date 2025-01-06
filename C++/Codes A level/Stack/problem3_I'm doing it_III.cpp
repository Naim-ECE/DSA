#include<bits/stdc++.h>
using namespace std;
// int z = 1;

void inbtm(stack <int> &st, int a) {
    if(st.empty()) {
        st.push(a);
        return;
    }
    int topel = st.top();
    st.pop();
    inbtm(st, a);

    st.push(topel);
}

void reverse(stack <int> &st) {
    if(st.empty()) {
        return;
    }
    int el = st.top(), y;
    st.pop();
    // y = ++z;
    reverse(st);
    // cout << "Done" << y << endl;

    inbtm(st, el);
}

void print(stack <int> st) {
    for( ; !st.empty(); ) {
        cout << st.top() << " ";
        st.pop();
    }
}

int main() {
    stack <int> st;
    for(int i = 1; i < 6; ++i) {
        st.push(i);
    }
    cout << "Original stack: ";

    print(st);
    cout << endl;
    reverse(st);

    cout << "Reversed stack: ";
    print(st);
    cout << endl;
    return 0;
}