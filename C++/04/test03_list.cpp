#include <iostream>
#include <list>

#include "output_container.h"

using namespace std;

int main() {
    list<int> lst{1, 7, 2, 8, 3};
    vector<int> vec{4, 5, 6};

    sort(vec.begin(), vec.end());

    lst.sort();

    cout << lst << endl;
    cout << vec << endl;
}