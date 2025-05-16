#include <iostream>
#include <string>
#include <deque>

using namespace std;

int N;
string cmd[10000];
int num[10000];

int main() {
    cin >> N;
    deque<int> deq;

    for (int i = 0; i < N; i++) {
        cin >> cmd[i];
        if (cmd[i] == "push_front" || cmd[i] == "push_back") {
            cin >> num[i];
            if(cmd[i] == "push_front") {
                deq.push_front(num[i]);
            }
            else {
                deq.push_back(num[i]);
            }
        }
        else if(cmd[i] == "pop_front") {
            cout << deq.front() << endl;
            deq.pop_front();
        }
        else if(cmd[i] == "pop_back") {
            cout << deq.back() << endl;
            deq.pop_back();
        }
        else if(cmd[i] == "size") {
            cout << deq.size() << endl;
        }
        else if(cmd[i] == "empty") {
            cout << deq.empty() << endl;
        }
        else if(cmd[i] == "front") {
            cout << deq.front() << endl;
        }
        else if(cmd[i] == "back") {
            cout << deq.back() << endl;
        }
    }

    // Please write your code here.

    return 0;
}
