#include <iostream>

#include "output_container.h"

using namespace std;

int main() {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({3, 30});
    pq.push({1, 10});
    pq.push({2, 20});
    pq.push({4, 40});

    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
}