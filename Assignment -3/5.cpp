/*Q7. Valid Parentheses: Check whether a given string of brackets is valid using a stack<char>.*/
#include <iostream>
#include <stack>
using namespace std;
bool isValid(string s) {
    stack<char> str;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            str.push(c);
        }
        else {
            if (str.empty()) return false;
            char top = str.top();
            str.pop();
            if (c == ')' && top != '(') return false;
            if (c == '}' && top != '{') return false;
            if (c == ']' && top != '[') return false;
        }
    }
    return str.empty();
}
int main() {
    string s = "[({})]";
    if (isValid(s))
        cout << "Valid string\n";
    else
        cout << "Invalid string\n";
    return 0;
}