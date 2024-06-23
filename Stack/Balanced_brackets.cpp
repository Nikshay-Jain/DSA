#include <bits/stdc++.h>
using namespace std;

bool is_balanced(string str) {
    stack<char> s;
    int i, n=str.length();
    for(i=0;i<n;i++) {
        if(str[i]=='(' || str[i]=='[' || str[i]=='{')
            s.push(str[i]);
        
        else {
            if(s.empty()==true)
                return false;
            else if((str[i]==')' && s.top()=='(') || (str[i]==']' && s.top()=='[') || (str[i]=='}' && s.top()=='{'))
                s.pop();
            else
                return false;
        }
    }
    return (s.empty()==true);       // handle extra opening bracket
}

int main() {
    string str = "([])({})";
    cout<<is_balanced(str);
}