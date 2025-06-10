#include <iostream>
#include <deque>

using namespace std;

int N;

int main() {
    cin >> N;
    deque<int> d;

    for(int i = 1; i <= N; i++) {
        d.push_back(i);
    }

    while(d.size() != 1) {
        d.pop_front();
        int a = d.front();
        d.pop_front();
        d.push_back(a);
    }
    cout << d.front() << endl;

    return 0;
}
