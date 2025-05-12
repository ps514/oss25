#include <iostream>
#include <stack>

using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;

    stack<int> st;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
            st.push(value[i]);
        }
        else if(command[i] == "pop") {
            cout << st.top() << endl;
            st.pop();
        }
        else if(command[i] == "size") {
            cout << st.size() << endl;
        }
        else if(command[i] == "empty") {
            cout << st.empty() << endl;
        }
        else if(command[i] == "top") {
            cout << st.top() << endl;
        }

    }

    // Please write your code here.

    return 0;
}
