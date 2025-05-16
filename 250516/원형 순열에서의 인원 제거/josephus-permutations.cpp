#include <iostream>
#include <queue>

using namespace std;

int N, K;

int main() {
    cin >> N >> K;

    queue<int> q;

    for(int i = 1; i <= N; i++) {
        q.push(i);
    }
    int a = q.size();
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j < K; j++) {
            int b = q.front();
            q.pop();
            q.push(b);
        }
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
