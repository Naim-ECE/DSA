#include<bits/stdc++.h>
using namespace std;

int pre(char c) {
    if(c == '^') {
        return 5;
    }
    else if(c == '/') {
        return 4;
    }
    else if(c == '*') {
        return 3;
    }
    else if(c == '+') {
        return 2;
    }
    else if(c == '-') {
        return 1;
    }
    else {
        return 0;
    }
}

string operation(string s) {
    stack <char> st;
    string store;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= '1' && s[i] <= '9') {
            store += s[i];
            store += ' ';
        }
        else if(s[i] == '(') {
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            while(!st.empty() && st.top() != '(') {
                store += st.top();
                store += ' ';
                st.pop();
            }
            if(!st.empty()) {
                st.pop();
            }
        }
        else {
            while(!st.empty() && pre(st.top()) > pre(s[i])) {
                store += st.top();
                store += ' ';
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()) {
        store += st.top(); 
        store += ' ';
        st.pop();
    }
    return store;
}

int calculation(string s) {
    stack <int> st2;
    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= '1' && s[i] <= '9') {
            st2.push(s[i] - '0');
        }
        else {
            int a = st2.top();
            st2.pop();
            int b = st2.top();
            st2.pop();
            if(s[i] == '+') {
                st2.push(a + b);
            }
            else if(s[i] == '-') {
                st2.push(b - a);
            }
            else if(s[i] == '*') {
                st2.push(a * b);
            }
            else if(s[i] == '/') {
                st2.push(b / a);
            }
            else if(s[i] == '^') {
                st2.push(pow(b, a));
            }
        }
    }
    return st2.top();
}

int main() {
    string exp;
    cout << "Enter infix expression: ";
    getline(cin, exp);
    
    exp.erase(remove(exp.begin(), exp.end(), ' '), exp.end());

    cout << "Postfix expression: " << operation(exp) << "\n";
    cout << "Result: " << calculation(operation(exp)) << "\n";

    return 0;
}