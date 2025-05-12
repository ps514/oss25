#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;
string command[10000];
int A[10000];

int main() {
    cin >> N;

    queue<int> qu;

    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> A[i];
            qu.push(A[i]);
        }
        else if(command[i] == "pop") {
            cout << qu.front() << endl;
            qu.pop();
        }
        else if(command[i] == "size") {
            cout << qu.size() << endl;
        }
        else if(command[i] == "empty") {
            cout << qu.empty() << endl;
        }
        else if(command[i] == "front") {
            cout << qu.front() << endl;
        }
    }

    // Please write your code here.

    return 0;
}