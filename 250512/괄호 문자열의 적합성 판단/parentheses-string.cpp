#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;

int main() {
    cin >> str;

    stack<string> st;

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '(') {
            st.push("(");
        }
        else {
            if(st.empty() == true) {
                cout << "No" << endl;
                return 0;
            }
            else
                st.pop();
        }
    }
    if(st.empty() == true) 
        cout << "Yes" << endl;
    else   
        cout << "No" << endl;

    return 0;
}
