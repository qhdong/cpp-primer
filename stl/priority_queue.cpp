#include <iostream>
#include <queue>
#include <vector>
#include <functional>

using namespace std;

template<typename T>
void print_queue(T& q) {
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << "\n";
}

int main() {
    priority_queue<int> q;
    for (int n : {1, 2, 3, 5, 8, 7, 0, -1, 8}) {
        q.push(n);
    }

    print_queue(q);

    priority_queue<int, vector<int>, greater<int>> q2;
    for (int n : {8, 7, 6, 5, 4, 3, 2, 1, 1}) q2.push(n);
    print_queue(q2);

    auto cmp = [](int left, int right) { return (left ^ 1) < (right ^ 1); };
    priority_queue<int, vector<int>, decltype(cmp)> q3(cmp);
    for (int n : {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}) q3.push(n);
    print_queue(q3);

    return 0;
}
