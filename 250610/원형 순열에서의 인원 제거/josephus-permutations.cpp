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
    while(q.empty() != 1) {
        for(int i = 0; i < K - 1; i++) {
            int a = q.front();
            q.pop();
            q.push(a);
        }
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
